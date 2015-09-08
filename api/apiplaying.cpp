#include <api/apiplaying.hpp>
#include <core/duvido.hpp>
#include <data/list.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiPlaying::ApiPlaying(QObject* parent) : Api(parent) {
    sendRequest();
}

void ApiPlaying::sendRequest() {
    _reply = duvido->http().get(request("/playing", QVariantMap{{"token", duvido->token()}}));
    setupReply();
}

void ApiPlaying::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    _submissions = fromJson<Submission>(array);
}
