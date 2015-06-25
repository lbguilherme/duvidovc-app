#include <api/apicreatechallenge.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>

ApiCreateChallenge::ApiCreateChallenge(Info info, QObject* parent) : Api(parent), _info(info) {
    sendRequest();
}

void ApiCreateChallenge::sendRequest() {
    QVariantMap args {
        {"token", duvido->token()},
        {"title", _info.title},
        {"description", _info.description},
        {"reward", _info.reward},
        {"targets", _info.targets.join(",")},
        {"duration", QString::number(_info.duration)},
        {"image", _info.imageId}
    };

    _reply = duvido->http().post(request("/challenge", args), QByteArray());
    setupReply();
}

void ApiCreateChallenge::processReply() {

}
