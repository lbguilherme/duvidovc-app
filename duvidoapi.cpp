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

/*
void DuvidoApi::upload(QString token, QByteArray data, std::function<void(QString)> callback, std::function<void(double)> uploadProgress) {
    apiCall("post", "/upload", QVariantMap{{"token", token}}, data, [=](QByteArray bytes){
        callback(QString::fromUtf8(bytes));
    }, uploadProgress);
}

void DuvidoApi::createChallenge(QString title, QString description, QString reward, QStringList targets,
                                unsigned duration, QString imageId, std::function<void()> callback) {
    QVariantMap args {
        {"title", title},
        {"description", description},
        {"reward", reward},
        {"targets", targets.join(",")},
        {"duration", QString::number(duration)},
        {"image", imageId}
    };

    apiCall("post", "/challenge", args, {}, [=](QByteArray){
        callback();
    });
}
*/
