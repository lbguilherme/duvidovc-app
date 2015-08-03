#include <qml/mychallengesmodel.hpp>
#include <core/postingchallenge.hpp>
#include <api/apimychallenges.hpp>

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

        beginInsertRows(QModelIndex(), 0, result->challenges().size()-1);
        _myChallenges = result->challenges();
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
    roles[CreationTimeRole] = "creationTime";
    roles[TargetsRole] = "targets";
    roles[IsSendingRole] = "isSending";
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
    bool isPostingId = i < _postings.size();
    if (!isPostingId) i -= _postings.size();
    switch (role) {
    case IdRole:
        if (isPostingId)
            return QVariant();
        else
            return _myChallenges[i].id;
    case TitleRole:
        if (isPostingId)
            return _postings[i]->info().title;
        else
            return _myChallenges[i].title;
    case DescriptionRole:
        if (isPostingId)
            return _postings[i]->info().description;
        else
            return _myChallenges[i].description;
    case RewardRole:
        if (isPostingId)
            return _postings[i]->info().reward;
        else
            return _myChallenges[i].reward;
    case DurationRole:
        if (isPostingId)
            return _postings[i]->info().duration;
        else
            return _myChallenges[i].duration;
    case ImageIdRole:
        if (isPostingId)
            return QVariant();
        else
            return _myChallenges[i].imageId;
    case CreationTimeRole:
        if (isPostingId)
            return QDateTime::currentDateTime();
        else
            return _myChallenges[i].creationTime;
    case TargetsRole:
        if (isPostingId)
            return QVariant();
        else {
            QVariantList targets;
            for (auto& target : _myChallenges[i].targets)
                targets.append(QVariant::fromValue(target));
            return targets;
        }
    case IsSendingRole:
        return isPostingId;
    default:
        return QVariant();
    }
}
