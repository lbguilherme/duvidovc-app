#include <api/apiuploadimage.hpp>
#include <core/duvido.hpp>

#include <QByteArray>
#include <QNetworkReply>
#include <QFile>

ApiUploadImage::ApiUploadImage(QString sourcePath, int orientation, QObject* parent)
    : Api(parent)
    , _sourcePath(sourcePath)
    , _orientation(orientation) {
    sendRequest();
}

void ApiUploadImage::sendRequest() {
    QFile* file = new QFile(_sourcePath, this);
    file->open(QIODevice::ReadOnly);
    _reply = duvido->http().post(request("/image", QVariantMap{{"token", duvido->token()}, {"orientation", _orientation}}), file);
    setupReply();
    qDebug() << "Uploading" << file->size() << "bytes from" << _sourcePath;
}

void ApiUploadImage::processReply() {
    _id = QString::fromUtf8(_reply->readAll());
    qDebug() << "Upload finished. Result id:" << _id;
}
