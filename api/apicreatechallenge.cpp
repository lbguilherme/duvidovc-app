#include <api/apicreatechallenge.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>

ApiCreateChallenge::ApiCreateChallenge(QString title, QString description, QString reward, QStringList targets,
                                       unsigned duration, QString imageId, QObject* parent) : Api(parent) {
    QVariantMap args {
        {"token", duvido->token()},
        {"title", title},
        {"description", description},
        {"reward", reward},
        {"targets", targets.join(",")},
        {"duration", QString::number(duration)},
        {"image", imageId}
    };

    _reply = duvido->http().post(request("/challenge", args), QByteArray());
    setupReply();
}

void ApiCreateChallenge::processReply() {

}
