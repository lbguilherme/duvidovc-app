#include <qml/feedmodel.hpp>
#include <api/apifeed.hpp>
#include <data/list.hpp>
#include <core/duvido.hpp>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QFile>
#include <QDir>

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

        emit rowCountChanged();

        dumpToCache();
    });
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
    roles[DurationRole] = "duration";
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
    case DurationRole:
        return _challenges[i].duration;
    case ImageIdRole:
        return _challenges[i].imageId;
    case ImageRatioRole:
        return _challenges[i].ratio;
    default:
        return QVariant();
    }
}
