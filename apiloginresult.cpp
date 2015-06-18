#include "apiloginresult.hpp"
#include "user.hpp"

#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>

void ApiLoginResult::processReply() {
    QJsonObject obj = QJsonDocument::fromJson(_reply->readAll()).object();
    _id = obj["id"].toString();
    _name = obj["name"].toString();
}

User* ApiLoginResult::user() const {
    return new User(_id, _name);
}
