#include "facebookuser.hpp"
#include "facebook.hpp"
#include <QJsonDocument>
#include <QJsonObject>

FacebookUser::FacebookUser() : QObject(facebook) {
    _id = "";
}

FacebookUser::FacebookUser(QJsonDocument userData) : QObject(facebook) {
    QJsonObject obj = userData.object();
    _id = obj["id"].toString();
}

bool FacebookUser::isDummy() const {
    return _id.isEmpty();
}

QString FacebookUser::id() const {
    return _id;
}
