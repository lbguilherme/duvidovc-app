#include "avatarprovider.hpp"
#include "duvido.hpp"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>

AvatarProvider::AvatarProvider()
    : QQuickImageProvider(QQuickImageProvider::Pixmap,
                          QQmlImageProviderBase::ForceAsynchronousImageLoading)
{
}

QPixmap AvatarProvider::requestPixmap(const QString& id, QSize* size, const QSize& requestedSize) {
    QNetworkAccessManager http;
    QNetworkRequest request(duvido->api()->avatarUrl(id));
    QNetworkReply* reply = http.get(request);

    QEventLoop loop;
    QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
    loop.exec();

    QPixmap pixmap;
    reply->deleteLater();
    if (!pixmap.loadFromData(reply->readAll()))
        return QPixmap();

    if (requestedSize.isValid())
        pixmap = pixmap.scaled(requestedSize, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

    if (size)
        *size = pixmap.size();

    return pixmap;
}

