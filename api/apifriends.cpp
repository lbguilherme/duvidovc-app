#include <api/apifriends.hpp>
#include <core/duvido.hpp>
#include <core/user.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiFriends::ApiFriends(QObject* parent) : Api(parent) {
    _reply = duvido->http().get(request("/friends", QVariantMap{{"id", duvido->me()->id()}}));
    setupReply();
}

void ApiFriends::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    for (QJsonValue el : array) {
        QJsonObject obj = el.toObject();
        FriendInfo info;
        info.id = obj["id"].toString();
        info.name = obj["name"].toString();
        _friends.append(info);
    }
}

QString ApiFriends::id(int index) const {
    return _friends[index].id;
}

QString ApiFriends::name(int index) const {
    return _friends[index].name;
}

int ApiFriends::count() const {
    return _friends.size();
}
