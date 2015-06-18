#include "api.hpp"

#include <QNetworkReply>
#include <QUrlQuery>
#include <QDebug>

static const QString apiUrl = "http://duvido.vc/api/v0";

Api::Api(QObject* parent) : QObject(parent), _reply(nullptr) {

}

void Api::setupReply() {
    Q_ASSERT(_reply);
    _reply->setParent(this);
    connect(_reply, &QNetworkReply::finished, [this]{
        if (isSuccessful()) processReply();
        emit finished();
    });
}

double Api::progress() const {
    throw "not implemented";
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

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");
    return request;
}
