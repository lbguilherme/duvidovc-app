#include <api/apisendgcmtoken.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiSendGcmToken::ApiSendGcmToken(QString gcmToken, QObject* parent) : Api(parent), _gcmToken(gcmToken) {
    sendRequest();
}

void ApiSendGcmToken::sendRequest() {
    QVariantMap args {
        {"token", duvido->token()},
        {"gcmToken", _gcmToken}
    };

    _reply = duvido->http().post(request("/gcm", args), QByteArray());
    setupReply();
}

void ApiSendGcmToken::processReply() {

}
