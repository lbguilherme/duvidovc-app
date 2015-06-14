#include "duvidoapi.hpp"
#include "user.hpp"
#include "duvido.hpp"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QSettings>

const QString DuvidoApi::apiUrl = "http://duvido.vc/api/v0";

DuvidoApi::DuvidoApi() : QObject(duvido) {

}

QUrl DuvidoApi::avatarUrl(QString id) {
    return apiUrl + "/avatar?id=" + id;
}

QUrl DuvidoApi::avatarsUrl(QStringList ids) {
    return apiUrl + "/avatar?id=" + ids.join(",");
}

void DuvidoApi::login(QString token, std::function<void(User*)> callback) {
    QSettings settings;
    QString id = settings.value("myId").toString();
    QString name = settings.value("myName").toString();
    if (!id.isEmpty()) {
        callback(new User(id, name));
    }
    apiCall("post", "/login", QVariantMap{{"token", token}}, {}, [this, callback](QJsonObject resp){
        QString id = resp["id"].toString();
        QString name = resp["name"].toString();
        QSettings settings;
        if (settings.value("myId").toString() == id && settings.value("myName").toString() == name) return;
        settings.setValue("myId", id);
        settings.setValue("myName", name);
        callback(new User(id, name));
    });
}

void DuvidoApi::friends(QString id, std::function<void(QJsonArray)> callback) {
    apiCall("get", "/friends", QVariantMap{{"id", id}}, {}, callback);
}

void DuvidoApi::apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QJsonArray)> callback) {
    apiCall(method, endpoint, args, data, [=](QByteArray bytes){
        callback(QJsonDocument::fromJson(bytes).array());
    });
}

void DuvidoApi::apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QJsonObject)> callback) {
    apiCall(method, endpoint, args, data, [=](QByteArray bytes){
        callback(QJsonDocument::fromJson(bytes).object());
    });
}

void DuvidoApi::apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QByteArray)> callback) {
    QUrlQuery query;
    for (auto key : args.keys()) {
        query.addQueryItem(key, args[key].toString());
    }

    QUrl url;
    url.setUrl(apiUrl + endpoint);
    url.setQuery(query);
    qDebug() << url;
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/octet-stream");
    QNetworkReply* reply;

    if (method == "get")
        reply = duvido->http().get(request);
    else if (method == "post")
        reply = duvido->http().post(request, data);

    connect(reply, &QNetworkReply::finished, [callback, reply]{
        if (reply->error() != QNetworkReply::NoError)
            (void)0;// Connection error

        int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if (status == 401) {
            QSettings().clear();
            duvido->setMe(nullptr);
            return;
        }
        if (status != 200)
            (void)0;// Server error?

        QByteArray data = reply->readAll();
        qDebug() << data;

        callback(data);

        reply->deleteLater();
    });
}
