#include <qml/feedmodel.hpp>
#include <api/apifeed.hpp>
#include <data/list.hpp>
#include <core/duvido.hpp>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QDir>
#include <QTimer>

FeedModel::FeedModel(QObject* parent) : QAbstractListModel(parent) {
    fastRefreshFromCache();
    refresh();

    _connections << connect(duvido, &Duvido::challengeRefused, [this](QString id){
        for (int i = 0; i < _challenges.size(); ++i) {
            if (_challenges[i].id == id) {
                beginRemoveRows(QModelIndex(), i, i);
                _challenges.removeAt(i);
                endRemoveRows();
                emit rowCountChanged();
                break;
            }
        }
        dumpToCache();
    });

    QTimer* timer = new QTimer(this);
    timer->setInterval(1000);
    timer->setSingleShot(false);
    timer->start();
    connect(timer, &QTimer::timeout, [this](){
        checkExpired();
        emit dataChanged(index(0), index(rowCount()-1), {TimeLeftRole});
    });
}

FeedModel::~FeedModel() {
    for (auto&& connection : _connections)
        disconnect(connection);
}

void FeedModel::refresh() {
    auto result = new ApiFeed(this);
    connect(result, &Api::finished, [this, result]{
        result->deleteLater();

        beginRemoveRows(QModelIndex(), 0, _challenges.count()-1);
        _challenges.clear();
        endRemoveRows();

        beginInsertRows(QModelIndex(), 0, result->challenges().size()-1);
        _challenges = result->challenges();
        endInsertRows();

        checkExpired();
        emit rowCountChanged();

        dumpToCache();
    });
}

void FeedModel::checkExpired() {
    bool anyRemoved = false;
    for (int i = 0; i < _challenges.size(); ++i) {
        if (_challenges[i].timeLeft() < 0) {

            beginRemoveRows(QModelIndex(), i, i);
            _challenges.removeAt(i);
            endRemoveRows();
            anyRemoved = true;
            --i;
        }
    }

    if (anyRemoved)
        emit rowCountChanged();
}

void FeedModel::fastRefreshFromCache() {
    QFile cacheFile(QDir::temp().filePath("duvido_feed"));
    if (cacheFile.exists()) {
        cacheFile.open(QIODevice::ReadOnly);
        QJsonArray arr = QJsonDocument::fromJson(cacheFile.readAll()).array();
        _challenges = fromJson<Challenge>(arr);
    }
}

void FeedModel::dumpToCache() {
    QJsonArray arr = toJson(_challenges);
    QFile cacheFile(QDir::temp().filePath("duvido_feed"));
    cacheFile.open(QIODevice::WriteOnly);
    cacheFile.write(QJsonDocument(arr).toJson());
}

QHash<int, QByteArray> FeedModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[IdRole] = "id";
    roles[OwnerRole] = "owner";
    roles[OwnerNameRole] = "ownerName";
    roles[TitleRole] = "title";
    roles[DetailsRole] = "details";
    roles[RewardRole] = "reward";
    roles[TimeLeftRole] = "timeLeft";
    roles[ImageIdRole] = "imageId";
    roles[ImageRatioRole] = "imageRatio";
    return roles;
}

int FeedModel::rowCount(const QModelIndex& parent) const {
    if (parent.isValid())
        return 0;
    else
        return _challenges.count();
}

QVariant FeedModel::data(const QModelIndex& index, int role) const {
    int i = index.row();
    switch (role) {
    case IdRole:
        return _challenges[i].id;
    case OwnerRole:
        return _challenges[i].owner.id;
    case OwnerNameRole:
        return _challenges[i].owner.name;
    case TitleRole:
        return _challenges[i].title;
    case DetailsRole:
        return _challenges[i].details;
    case RewardRole:
        return _challenges[i].reward;
    case TimeLeftRole:
        return _challenges[i].timeLeft();
    case ImageIdRole:
        return _challenges[i].imageId;
    case ImageRatioRole:
        return _challenges[i].ratio;
    default:
        return QVariant();
    }
}
