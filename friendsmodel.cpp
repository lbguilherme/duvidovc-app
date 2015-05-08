#include "friendsmodel.hpp"

FriendsModel::FriendsModel(QString userId, QObject* parent) : QAbstractListModel(parent) {
    _userId = userId;
}

QHash<int, QByteArray> FriendsModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[IdRole] = "id";
    roles[NameRole] = "name";
    return roles;
}

int FriendsModel::rowCount(const QModelIndex& parent) const {
    if (parent.isValid())
        return 0;
    else
        return _friends.count();
}

QVariant FriendsModel::data(const QModelIndex& index, int role) const {
    int i = index.row();
    switch (role) {
    case IdRole:
        return _friends[i].id();
    default:
        return QVariant();
    }
}
