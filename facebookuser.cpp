#include "facebookuser.hpp"
#include "facebook.hpp"
#include <QJsonDocument>
#include <QJsonObject>

FacebookUser::FacebookUser() : QObject(facebook) {
    setDummy();
}

void FacebookUser::setDummy() {
    _id = "";
}

void FacebookUser::loadData(QJsonDocument userData) {
    QJsonObject obj = userData.object();
    _id = obj["id"].toString();

    emit idChanged();
}

bool FacebookUser::isDummy() {
    return _id.isEmpty();
}

QString FacebookUser::id() {
    return _id;
}
