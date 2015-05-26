#include "user.hpp"
#include "friendsmodel.hpp"
#include "duvido.hpp"

User::User(QString id, QString name) : QObject(duvido) {
    _id = id;
    _name = name;
}

QString User::id() const {
    return _id;
}

QString User::name() const {
    return _name;
}

