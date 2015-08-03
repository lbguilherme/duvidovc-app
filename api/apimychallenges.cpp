#include <api/apimychallenges.hpp>
#include <data/list.hpp>
#include <core/duvido.hpp>

#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiMyChallenges::ApiMyChallenges(QObject* parent) : Api(parent) {
    sendRequest();
}

void ApiMyChallenges::sendRequest() {
    _reply = duvido->http().get(request("/challenges", QVariantMap{{"token", duvido->token()}}));
    setupReply();
}

void ApiMyChallenges::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    _challenges = fromJson<MyChallenge>(array);
}
