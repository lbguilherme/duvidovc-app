#include "duvidoapi.hpp"
#include "user.hpp"
#include "duvido.hpp"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

const QString DuvidoApi::apiUrl = "http://duvido.vc/api/v0";

DuvidoApi::DuvidoApi() : QObject(duvido), _http(new QNetworkAccessManager(this)) {

}

QString DuvidoApi::avatar(QString id) {
    return apiUrl + "/avatar?id=" + id;
}

void DuvidoApi::login(QString token) {
    apiCall("/login", QVariantMap{{"token", token}}, [this](QJsonObject resp){
        duvido->setMe(new User(resp["id"].toString()));
    });
}

void DuvidoApi::friends(QString id, std::function<void(QJsonArray)> callback) {
    apiCall("/friends", QVariantMap{{"id", id}}, callback);
}

void DuvidoApi::apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonArray)> callback) {
    apiCall(endpoint, args, [=](QByteArray bytes){
        callback(QJsonDocument::fromJson(bytes).array());
    });
}

void DuvidoApi::apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonObject)> callback) {
    apiCall(endpoint, args, [=](QByteArray bytes){
        callback(QJsonDocument::fromJson(bytes).object());
    });
}

void DuvidoApi::apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QByteArray)> callback) {
    QUrlQuery query;
    for (auto key : args.keys()) {
        query.addQueryItem(key, args[key].toString());
    }

    QUrl url;
    url.setUrl(apiUrl + endpoint);
    url.setQuery(query);
    qDebug() << url;
    QNetworkRequest request(url);
    QNetworkReply* reply = _http->get(request);
    connect(reply, &QNetworkReply::finished, [callback, reply]{
        if (reply->error() != QNetworkReply::NoError)
            (void)0;// Connection error

        int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if (status != 200)
            (void)0;// Server error?

        QByteArray data = reply->readAll();
        qDebug() << data;

        callback(data);

        reply->deleteLater();
    });
}
