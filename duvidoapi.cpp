#include "duvidoapi.hpp"
#include "duvido.hpp"
#include "apiloginresult.hpp"
#include "apifriendsresult.hpp"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>

namespace {

const QString apiUrl = "http://duvido.vc/api/v0";

QNetworkReply* apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data) {
    QUrlQuery query;
    for (auto key : args.keys()) {
        query.addQueryItem(key, args[key].toString());
    }

    QUrl url;
    url.setUrl(apiUrl + endpoint);
    url.setQuery(query);

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");

    if (method == "get")
        return duvido->http().get(request);
    else if (method == "post")
        return duvido->http().post(request, data);
    else
        throw "not implemented";
}

}

ApiLoginResult* DuvidoApi::login(QString token) {
    return new ApiLoginResult(apiCall("post", "/login", QVariantMap{{"token", token}}, {}));
}

ApiFriendsResult* DuvidoApi::friends(QString id) {
    return new ApiFriendsResult(apiCall("get", "/friends", QVariantMap{{"id", id}}, {}));
}

QUrl DuvidoApi::avatarUrl(QString id) {
    return apiUrl + "/avatar?id=" + id;
}

QUrl DuvidoApi::avatarsUrl(QStringList ids) {
    return apiUrl + "/avatars?id=" + ids.join(",");
}

/*
void DuvidoApi::upload(QString token, QByteArray data, std::function<void(QString)> callback, std::function<void(double)> uploadProgress) {
    apiCall("post", "/upload", QVariantMap{{"token", token}}, data, [=](QByteArray bytes){
        callback(QString::fromUtf8(bytes));
    }, uploadProgress);
}

void DuvidoApi::createChallenge(QString title, QString description, QString reward, QStringList targets,
                                unsigned duration, QString imageId, std::function<void()> callback) {
    QVariantMap args {
        {"title", title},
        {"description", description},
        {"reward", reward},
        {"targets", targets.join(",")},
        {"duration", QString::number(duration)},
        {"image", imageId}
    };

    apiCall("post", "/challenge", args, {}, [=](QByteArray){
        callback();
    });
}
*/
