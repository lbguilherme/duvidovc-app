#include "facebookavatarprovider.hpp"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QDebug>

FacebookAvatarProvider::FacebookAvatarProvider()
    : QQuickImageProvider(QQuickImageProvider::Image,
                          QQmlImageProviderBase::ForceAsynchronousImageLoading){
}

QImage FacebookAvatarProvider::requestImage(const QString& id, QSize* size, const QSize& requestedSize) {
    QUrl url = "http://graph.facebook.com/" + id + "/picture?type=square&width=320&height=320";

    QNetworkAccessManager http;
    QByteArray data;

    {
        QNetworkRequest request(url);
        QNetworkReply* reply = http.get(request);

        QEventLoop loop;
        QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        url = reply->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
        delete reply;
    }

    {
        QNetworkRequest request(url);
        QNetworkReply* reply = http.get(request);

        QEventLoop loop;
        QObject::connect(reply, &QNetworkReply::finished, &loop, &QEventLoop::quit);
        loop.exec();

        data = reply->readAll();
        delete reply;
    }

    QImage img = QImage::fromData(data);

    if (img.size().width() < 100) {
        img.load(":/artwork/avatar-placeholder.png");
    }

    if (size)
        *size = img.size();

    if (requestedSize.isValid())
        img = img.scaled(requestedSize);

    return img;
}
