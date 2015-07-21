#include <api/apifeed.hpp>
#include <core/duvido.hpp>
#include <data/list.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiFeed::ApiFeed(QObject* parent) : Api(parent) {
    sendRequest();
}

void ApiFeed::sendRequest() {
    _reply = duvido->http().get(request("/feed", QVariantMap{{"token", duvido->token()}}));
    setupReply();
}

void ApiFeed::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    _challenges = fromJson<Challenge>(array);
}
