#include "duvidoapi.hpp"

#include <QStringList>
#include <QString>
#include <QUrl>

static const QString apiUrl = "http://duvido.vc/api/v0";

QUrl DuvidoApi::avatarUrl(QString id) {
    return apiUrl + "/avatar?id=" + id;
}

QUrl DuvidoApi::avatarsUrl(QStringList ids) {
    return apiUrl + "/avatars?id=" + ids.join(",");
}
