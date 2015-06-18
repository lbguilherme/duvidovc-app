#include "apifriendsresult.hpp"
#include "user.hpp"

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

void ApiFriendsResult::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    for (QJsonValue el : array) {
        QJsonObject obj = el.toObject();
        FriendInfo info;
        info.id = obj["id"].toString();
        info.name = obj["name"].toString();
        _friends.append(info);
    }
}

QList<User*> ApiFriendsResult::friends() const {
    QList<User*> users;
    for (FriendInfo info : _friends) {
        users.append(new User(info.id, info.name));
    }
    return users;
}

int ApiFriendsResult::count() const {
    return _friends.size();
}
