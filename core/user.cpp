#include <core/user.hpp>
#include <qml/friendsmodel.hpp>
#include <core/duvido.hpp>

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

