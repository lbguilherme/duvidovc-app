#include "apiresult.hpp"

#include <QNetworkReply>

ApiResult::ApiResult(QNetworkReply* reply, QObject* parent) : QObject(parent), _reply(reply) {
    _reply->setParent(this);
    connect(_reply, &QNetworkReply::finished, [this]{
        if (isSuccessful()) processReply();
        emit finished();
    });
}

double ApiResult::progress() const {
    throw "not implemented";
}

bool ApiResult::isFinished() const {
    return _reply->isFinished();
}

int ApiResult::status() const {
    return _reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
}

bool ApiResult::isSuccessful() const {
    return status() == 200;
}

void ApiResult::cancel() {
    _reply->abort();
}
