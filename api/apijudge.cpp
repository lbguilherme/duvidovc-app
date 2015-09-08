#include <api/apijudge.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiJudge::ApiJudge(QString id, bool accepted, QObject* parent) : Api(parent), _id(id), _accepted(accepted) {
    sendRequest();
}

void ApiJudge::sendRequest() {
    QVariantMap args {
        {"token", duvido->token()},
        {"submission", _id},
        {"accepted", _accepted ? "1" : "0"}
    };

    _reply = duvido->http().post(request("/judge", args), QByteArray());
    setupReply();
}

void ApiJudge::processReply() {

}
