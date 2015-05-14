#include "friendsmodel.hpp"
#include "duvido.hpp"

#include <QJsonObject>
#include <QJsonArray>

FriendsModel::FriendsModel(QString userId, QObject* parent) : QAbstractListModel(parent) {
    _userId = userId;

    duvido->api()->friends(_userId, [this](QJsonArray resp){
        beginRemoveRows(QModelIndex(), 0, _friends.count()-1);
        for (User* user : _friends) {
            user->deleteLater();
        }
        _friends.clear();
        endRemoveRows();
        beginInsertRows(QModelIndex(), 0, resp.count()-1);
        for (QJsonValue el : resp) {
            QJsonObject obj = el.toObject();
            _friends.append(new User(obj["id"].toString(), obj["name"].toString()));
        }
        endInsertRows();
    });
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
        return _friends[i]->id();
    case NameRole:
        return _friends[i]->name();
    default:
        return QVariant();
    }
}
