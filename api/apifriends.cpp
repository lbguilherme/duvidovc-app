#include <api/apifriends.hpp>
#include <core/duvido.hpp>
#include <core/avatarmanager.hpp>
#include <data/list.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiFriends::ApiFriends(QObject* parent) : Api(parent) {
    sendRequest();
}

void ApiFriends::sendRequest() {
    _reply = duvido->http().get(request("/friends", QVariantMap{{"token", duvido->token()}}));
    setupReply();
}

void ApiFriends::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    _friends = fromJson<User>(array);

    for (const User& user : _friends) {
        duvido->avatarManager()->fetchAvatar(user.id);
    }
}
