#include <qml/playingmodel.hpp>
#include <core/postingsubmission.hpp>
#include <core/duvido.hpp>
#include <api/apiplaying.hpp>
#include <data/list.hpp>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QDir>
#include <QTimer>

PlayingModel::PlayingModel(QObject* parent) : QAbstractListModel(parent) {
    fastRefreshFromCache();

    _connections << connect(duvido, &Duvido::postingSubmissionAdded, [this](PostingSubmission* postingSubmission){
        beginInsertRows(QModelIndex(), _postings.size(), _postings.size());
        _postings.append(postingSubmission);
        endInsertRows();
    });

    _connections << connect(duvido, &Duvido::postingSubmissionRemoved, [this](PostingSubmission* postingSubmission){
        refresh();
        int i = _postings.indexOf(postingSubmission);
        if (i < 0) return;
        beginRemoveRows(QModelIndex(), i, i);
        _postings.removeAt(i);
        endRemoveRows();
    });

    const auto& postingSubmissions = duvido->postingSubmissions();
    beginInsertRows(QModelIndex(), 0, postingSubmissions.size()-1);
    _postings = postingSubmissions;
    endInsertRows();

    refresh();

    QTimer* timer = new QTimer(this);
    timer->setInterval(1000);
    timer->setSingleShot(false);
    timer->start();
    connect(timer, &QTimer::timeout, [this](){
        emit dataChanged(index(0), index(rowCount()-1), {TimeLeftRole});
    });
}

PlayingModel::~PlayingModel() {
    for (auto&& connection : _connections)
        disconnect(connection);
}


void PlayingModel::refresh() {
    auto result = new ApiPlaying(this);
    connect(result, &Api::finished, [this, result]{
        result->deleteLater();

        int p = _postings.size();
        int i=0, j=0;
        while (i < _submissions.size() || j < result->submissions().size()) {
            if (i == _submissions.size()) {
                beginInsertRows(QModelIndex(), p+j, p+result->submissions().size()-1);
                for (; j < result->submissions().size(); ++j)
                    _submissions.append(result->submissions()[j]);
                endInsertRows();
                break;
            }
            if (j == result->submissions().size()) {
                beginRemoveRows(QModelIndex(), p+i, p+_submissions.size()-1);
                for (; i < _submissions.size(); ++i)
                    _submissions.removeLast();
                endRemoveRows();
                break;
            }
            if (_submissions[i].id == result->submissions()[j].id) {
                _submissions[i] = result->submissions()[j];
                emit dataChanged(index(p+i), index(p+i));
                ++i; ++j;
            } else {
                int k = j;
                bool found = false;
                for (;k < result->submissions().size(); ++k) {
                    if (result->submissions()[k].id == _submissions[i].id) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    beginInsertRows(QModelIndex(), p+j, p+k);
                    for (; j <= k; ++j)
                        _submissions.insert(i++, result->submissions()[j]);
                    endInsertRows();
                } else {
                    beginRemoveRows(QModelIndex(), p+i, p+_submissions.size()-1);
                    for (; i < _submissions.size();)
                        _submissions.removeAt(i);
                    endRemoveRows();
                }
            }
        }

        dumpToCache();

        QTimer::singleShot(10000, this, &PlayingModel::refresh);
    });
}

void PlayingModel::fastRefreshFromCache() {
    QFile cacheFile(QDir::temp().filePath("duvido_playing"));
    if (cacheFile.exists()) {
        cacheFile.open(QIODevice::ReadOnly);
        QJsonArray arr = QJsonDocument::fromJson(cacheFile.readAll()).array();
        beginInsertRows(QModelIndex(), 0, arr.size()-1);
        _submissions = fromJson<Submission>(arr);
        endInsertRows();
    }
}

void PlayingModel::dumpToCache() {
    QJsonArray arr = toJson(_submissions);
    QFile cacheFile(QDir::temp().filePath("duvido_playing"));
    cacheFile.open(QIODevice::WriteOnly);
    cacheFile.write(QJsonDocument(arr).toJson());
}

QHash<int, QByteArray> PlayingModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[ChallengeIdRole] = "challengeId";
    roles[TextRole] = "text";
    roles[TitleRole] = "title";
    roles[DetailsRole] = "details";
    roles[RewardRole] = "reward";
    roles[DurationRole] = "duration";
    roles[ImageIdRole] = "imageId";
    roles[CreationTimeRole] = "creationTime";
    roles[StatusRole] = "status";
    roles[SentTimeRole] = "sentTime";
    roles[JudgedTimeRole] = "judgedTime";
    roles[ChallengeOwnerIdRole] = "challengeOwnerId";
    roles[ChallengeOwnerNameRole] = "challengeOwnerName";
    roles[RatioRole] = "ratio";
    roles[TimeLeftRole] = "timeLeft";
    return roles;
}

int PlayingModel::rowCount(const QModelIndex& parent) const {
    if (parent.isValid())
        return 0;
    else
        return _postings.count() + _submissions.count();
}

QVariant PlayingModel::data(const QModelIndex& index, int role) const {
    int i = index.row();
    bool isPostingId = i < _postings.size();
    if (!isPostingId) i -= _postings.size();
    switch (role) {
    case ChallengeIdRole:
        if (isPostingId)
            return _postings[i]->info().challenge;
        else
            return _submissions[i].challenge;
    case TitleRole:
        if (isPostingId)
            return "";
        else
            return _submissions[i].title;
    case TextRole:
        if (isPostingId)
            return "";
        else
            return _submissions[i].text;
    case DetailsRole:
        if (isPostingId)
            return "";
        else
            return _submissions[i].details;
    case RewardRole:
        if (isPostingId)
            return "";
        else
            return _submissions[i].reward;
    case DurationRole:
        if (isPostingId)
            return "";
        else
            return _submissions[i].duration;
    case ImageIdRole:
        if (isPostingId)
            return QVariant();
        else
            return _submissions[i].imageId;
    case CreationTimeRole:
        if (isPostingId)
            return QDateTime::currentDateTime();
        else
            return _submissions[i].creationTime;
    case StatusRole:
        if (isPostingId)
            return "sending";
        else
            return _submissions[i].status;
    case SentTimeRole:
        if (isPostingId)
            return QDateTime::currentDateTime();
        else
            return _submissions[i].sentTime;
    case JudgedTimeRole:
        if (isPostingId)
            return QDateTime();
        else
            return _submissions[i].judgedTime;
    case ChallengeOwnerIdRole:
        if (isPostingId)
            return "";
        else
            return _submissions[i].challengeOwner.id;
    case ChallengeOwnerNameRole:
        if (isPostingId)
            return "";
        else
            return _submissions[i].challengeOwner.name;
    case RatioRole:
        if (isPostingId)
            return 1;
        else
            return _submissions[i].ratio;
    case TimeLeftRole:
        if (isPostingId)
            return 0;
        else
            return _submissions[i].timeLeft();
    default:
        return QVariant();
    }
}
