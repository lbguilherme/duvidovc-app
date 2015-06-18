#include "apilogin.hpp"
#include "user.hpp"
#include "duvido.hpp"

#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>

ApiLogin::ApiLogin(QObject* parent) : Api(parent) {
    _reply = duvido->http().post(request("/login", QVariantMap{{"token", duvido->token()}}), QByteArray());
    setupReply();
}

void ApiLogin::processReply() {
    QJsonObject obj = QJsonDocument::fromJson(_reply->readAll()).object();
    _id = obj["id"].toString();
    _name = obj["name"].toString();
}

User* ApiLogin::user() const {
    return new User(_id, _name);
}
