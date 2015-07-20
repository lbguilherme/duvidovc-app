#include <api/apiupload.hpp>
#include <core/duvido.hpp>

#include <QByteArray>
#include <QNetworkReply>
#include <QFile>

ApiUpload::ApiUpload(QString sourcePath, QObject* parent) : Api(parent), _sourcePath(sourcePath) {
    sendRequest();
}

void ApiUpload::sendRequest() {
    QFile* file = new QFile(_sourcePath, this);
    file->open(QIODevice::ReadOnly);
    _reply = duvido->http().post(request("/upload", QVariantMap{{"token", duvido->token()}}), file);
    setupReply();
    qDebug() << "Uploading" << file->size() << "bytes from" << _sourcePath;
}

void ApiUpload::processReply() {
    _id = QString::fromUtf8(_reply->readAll());
    qDebug() << "Upload finished. Result id:" << _id;
}

QString ApiUpload::sourcePath() const {
    return _sourcePath;
}

QString ApiUpload::id() const {
    return _id;
}
