#include "avatarloader.hpp"
#include "duvido.hpp"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDir>
#include <QQuickItem>

AvatarLoader::AvatarLoader(QObject* parent) : QObject(parent), _target(nullptr) {

}

QString AvatarLoader::userId() const {
    return _userId;
}

void AvatarLoader::setUserId(const QString& userId) {
    _userId = userId;
    fetch();
}

QQuickItem* AvatarLoader::target() const {
    return _target;
}

void AvatarLoader::setTarget(QQuickItem* target) {
    _target = target;
    setTargetSource();
}

void AvatarLoader::fetch() {
    setTargetSource();
    if (QFile::exists(cacheFilePath()))
        return;

    QNetworkRequest request(duvido->api()->avatarUrl(_userId));
    QNetworkReply* reply = duvido->http().get(request);
    connect(reply, &QNetworkReply::finished, this, [reply, this]{
        reply->deleteLater();
        int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if (status != 200) return;
        QFile file(cacheFilePath());
        file.open(QIODevice::WriteOnly);
        file.write(reply->readAll());
        file.close();
        setTargetSource();
    });
}

void AvatarLoader::setTargetSource() {
    if (!_target) return;

    QString file = cacheFilePath();
    _target->setProperty("source", QFile::exists(file) ? "file:///" + file : "");
}

QString AvatarLoader::cacheFilePath() {
    return QDir::temp().filePath("duvido_avatar_" + _userId + ".jpg");
}
