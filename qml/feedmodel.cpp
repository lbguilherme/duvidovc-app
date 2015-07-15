#include <qml/feedmodel.hpp>
#include <api/apifeed.hpp>

FeedModel::FeedModel(QObject* parent) : QAbstractListModel(parent) {
    refresh();
}

void FeedModel::refresh() {
    auto result = new ApiFeed(this);
    connect(result, &Api::finished, [this, result]{
        result->deleteLater();

        beginRemoveRows(QModelIndex(), 0, _challenges.count()-1);
        _challenges.clear();
        endRemoveRows();

        beginInsertRows(QModelIndex(), 0, result->count()-1);
        for (int i = 0; i < result->count(); ++i) {
            Challenge challenge;
            const ApiFeed::Info& info = (*result)[i];
            challenge.id = info.id;
            challenge.owner = info.owner;
            challenge.ownerName = info.ownerName;
            challenge.title = info.title;
            challenge.description = info.description;
            challenge.reward = info.reward;
            challenge.duration = info.duration;
            challenge.imageId = info.image;
            _challenges.append(challenge);
        }
        endInsertRows();
    });
}

QHash<int, QByteArray> FeedModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[IdRole] = "id";
    roles[OwnerRole] = "owner";
    roles[OwnerNameRole] = "ownerName";
    roles[TitleRole] = "title";
    roles[DescriptionRole] = "description";
    roles[RewardRole] = "reward";
    roles[DurationRole] = "duration";
    roles[ImageIdRole] = "imageId";
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
        return _challenges[i].owner;
    case OwnerNameRole:
        return _challenges[i].ownerName;
    case TitleRole:
        return _challenges[i].title;
    case DescriptionRole:
        return _challenges[i].description;
    case RewardRole:
        return _challenges[i].reward;
    case DurationRole:
        return _challenges[i].duration;
    case ImageIdRole:
        return _challenges[i].imageId;
    default:
        return QVariant();
    }
}
