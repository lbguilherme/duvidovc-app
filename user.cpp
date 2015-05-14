#include "user.hpp"
#include "friendsmodel.hpp"
#include "duvido.hpp"

User::User(QString id, QObject* parent) : QObject(parent) {
    _id = id;
}

QString User::id() const {
    return _id;
}
