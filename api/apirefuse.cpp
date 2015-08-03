#include <api/apirefuse.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiRefuse::ApiRefuse(QString id, QObject* parent) : Api(parent), _id(id) {
    sendRequest();
}

void ApiRefuse::sendRequest() {
    QVariantMap args {
        {"token", duvido->token()},
        {"id", _id}
    };

    _reply = duvido->http().post(request("/refuse", args), QByteArray());
    setupReply();
}

void ApiRefuse::processReply() {

}
