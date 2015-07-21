#include <api/apicreatechallenge.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

#ifdef Q_OS_ANDROID
#include <vc.duvido.Tracker.hpp>
#include <java.lang.String.hpp>
using namespace vc::duvido;
#endif

ApiCreateChallenge::ApiCreateChallenge(PreChallenge info, QObject* parent) : Api(parent), _info(info) {
    sendRequest();
}

void ApiCreateChallenge::sendRequest() {
    QVariantMap args {
        {"token", duvido->token()},
        {"title", _info.title},
        {"description", _info.description},
        {"reward", _info.reward},
        {"targets", _info.targetIds.join(",")},
        {"duration", QString::number(_info.duration)},
        {"image", _info.image}
    };

    _reply = duvido->http().post(request("/challenge", args), QByteArray());
    setupReply();

#ifdef Q_OS_ANDROID
    connect(_reply, &QNetworkReply::finished, [&]{
        QJsonObject params;
        params["Owner"] = duvido->myId();
        params["Title"] = _info.title;
        params["Description"] = _info.description;
        params["Reward"] = _info.reward;
        params["Duration (s)"] = (double)_info.duration;
        params["Targets"] = _info.targetIds.join(",");
        params["Image"] = _info.image;
        Tracker::event("Created challenge", QJsonDocument(params).toJson());
        Tracker::incrementUserProperty("Challenges Created", 1);
    });
#endif
}

void ApiCreateChallenge::processReply() {

}
