#include <qml/mychallengesmodel.hpp>
#include <core/postingchallenge.hpp>
#include <api/apimychallenges.hpp>
#include <QDebug>

MyChallengesModel::MyChallengesModel(QObject* parent) : QAbstractListModel(parent) {
    refresh();
}

void MyChallengesModel::refresh() {
    auto result = new ApiMyChallenges(this);
    connect(result, &Api::finished, [this, result]{
        result->deleteLater();

        beginRemoveRows(QModelIndex(), 0, _myChallenges.count()-1);
        _myChallenges.clear();
        endRemoveRows();

        beginInsertRows(QModelIndex(), 0, result->count()-1);
        for (int i = 0; i < result->count(); ++i) {
            MyChallenge challenge;
            const ApiMyChallenges::Info& info = (*result)[i];
            qDebug() << info.id;
            challenge.id = info.id;
            challenge.title = info.title;
            challenge.description = info.description;
            challenge.reward = info.reward;
            challenge.duration = info.duration;
            challenge.imageId = info.image;
            challenge.pending = nullptr;
            _myChallenges.append(challenge);
        }
        endInsertRows();
    });
}

QHash<int, QByteArray> MyChallengesModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[IdRole] = "id";
    roles[TitleRole] = "title";
    roles[DescriptionRole] = "description";
    roles[RewardRole] = "reward";
    roles[DurationRole] = "duration";
    roles[ImageIdRole] = "imageId";
    roles[IsSendingRole] = "isSending";
    roles[SendingProgressRole] = "sendingProgress";
    return roles;
}

int MyChallengesModel::rowCount(const QModelIndex& parent) const {
    if (parent.isValid())
        return 0;
    else
        return _myChallenges.count();
}

QVariant MyChallengesModel::data(const QModelIndex& index, int role) const {
    int i = index.row();
    switch (role) {
    case IdRole:
        return _myChallenges[i].id;
    case TitleRole:
        return _myChallenges[i].title;
    case DescriptionRole:
        return _myChallenges[i].description;
    case RewardRole:
        return _myChallenges[i].reward;
    case DurationRole:
        return _myChallenges[i].duration;
    case ImageIdRole:
        return _myChallenges[i].imageId;
    case IsSendingRole:
        return _myChallenges[i].pending != nullptr;
    case SendingProgressRole:
        return _myChallenges[i].pending ? _myChallenges[i].pending->progress() : 0;
    default:
        return QVariant();
    }
}
