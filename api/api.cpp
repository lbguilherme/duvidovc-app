#include <api/api.hpp>
#include <core/duvido.hpp>

#include <QNetworkReply>
#include <QUrlQuery>
#include <QDebug>

static const QString apiUrl = "http://duvido.vc/api/v0";

Api::Api(QObject* parent) : QObject(parent), _reply(nullptr), _uploadProgress(0), _downloadProgress(0) {

}

Api::~Api() {
    cancel();
}

void Api::setupReply() {
    Q_ASSERT(_reply);
    _reply->setParent(this);
    connect(_reply, &QNetworkReply::finished, [this]{
        if (isSuccessful()) processReply();
        emit finished();
    });

    connect(_reply, &QNetworkReply::uploadProgress, [this](qint64 sent, qint64 total){
        _uploadProgress = 1.0 * sent / total;
        emit uploadProgressChanged();
    });

    connect(_reply, &QNetworkReply::downloadProgress, [this](qint64 received, qint64 total){
        _downloadProgress = 1.0 * received / total;
        emit downloadProgressChanged();
    });
}

float Api::uploadProgress() const {
    return _uploadProgress;
}

float Api::downloadProgress() const {
    return _downloadProgress;
}

bool Api::isFinished() const {
    return _reply->isFinished();
}

int Api::status() const {
    return _reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
}

bool Api::isSuccessful() const {
    return status() == 200;
}

void Api::cancel() {
    _reply->abort();
}

QNetworkRequest Api::request(QString endpoint, QVariantMap args) {
    QUrlQuery query;
    for (auto key : args.keys()) {
        query.addQueryItem(key, args[key].toString());
    }

    QUrl url;
    url.setUrl(apiUrl + endpoint);
    url.setQuery(query);

    qDebug() << metaObject()->className() << url.toString().replace(duvido->token(), "<token>");

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");
    return request;
}
