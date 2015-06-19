#include "apiupload.hpp"
#include "duvido.hpp"

#include <QByteArray>
#include <QNetworkReply>
#include <QFile>

ApiUpload::ApiUpload(QString sourcePath, QObject* parent) : Api(parent) {
    QFile* file = new QFile(sourcePath, this);
    file->open(QIODevice::ReadOnly);
    _reply = duvido->http().post(request("/upload", QVariantMap{{"token", duvido->token()}}), file);
    setupReply();
    qDebug() << "Uploading" << file->size() << "bytes from" << sourcePath;
}

void ApiUpload::processReply() {
    _id = QString::fromUtf8(_reply->readAll());
    qDebug() << "Upload finished. Result id:" << _id;
}

QString ApiUpload::id() const {
    return _id;
}
