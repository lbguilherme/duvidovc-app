#include "user.hpp"
#include "friendsmodel.hpp"
#include "duvido.hpp"

User::User(QString id, QObject* parent) : QObject(parent) {
    _id = id;
    _friends = nullptr;
}

QString User::id() const {
    return _id;
}

FriendsModel* User::friendsModel() const {
    if (!_friends)
        _friends = new FriendsModel(_id, duvido);
    return _friends;
}
