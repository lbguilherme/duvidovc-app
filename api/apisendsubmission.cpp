#include <api/apisendsubmission.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiSendSubmission::ApiSendSubmission(PreSubmission info, QObject* parent) : Api(parent), _info(info) {
    sendRequest();
}

void ApiSendSubmission::sendRequest() {
    QVariantMap args {
        {"token", duvido->token()},
        {"challenge", _info.challenge},
        {"title", _info.text},
        {"imageId", _info.imageId}
    };

    _reply = duvido->http().post(request("/submission", args), QByteArray());
    setupReply();
}

void ApiSendSubmission::processReply() {

}
