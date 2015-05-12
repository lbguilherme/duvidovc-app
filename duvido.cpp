#include "duvido.hpp"
#include "facebook.hpp"
#include "user.hpp"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

Duvido* duvido;

const QString Duvido::apiUrl = "http://duvido.vc/api/v0";

Duvido::Duvido()
    : QObject(nullptr), _me(nullptr), _friendsModel(nullptr), _http(new QNetworkAccessManager(this)) {

    qRegisterMetaType<User*>("User");
    qRegisterMetaType<FriendsModel*>("FriendsModel");

    connect(facebook, &Facebook::accessTokenChanged, [this]{
        login(facebook->accessToken());
    });
}

void Duvido::login(QString token) {
    apiCall("/login", QVariantMap{{"token", token}}, [this](QJsonObject resp){
        _me = new User(resp["id"].toString());
        emit loggedInChanged();
    });
}

void Duvido::friends(QString id, std::function<void(QJsonArray)> callback) {
    apiCall("/friends", QVariantMap{{"id", id}}, callback);
}

void Duvido::apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonArray)> callback) {
    apiCall(endpoint, args, [=](QByteArray bytes){
        callback(QJsonDocument::fromJson(bytes).array());
    });
}

void Duvido::apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonObject)> callback) {
    apiCall(endpoint, args, [=](QByteArray bytes){
        callback(QJsonDocument::fromJson(bytes).object());
    });
}

void Duvido::apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QByteArray)> callback) {
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

QString Duvido::avatarUrl(QString id) const {
    return apiUrl + "/avatar?id=" + id;
}

bool Duvido::loggedIn() {
    return _me != nullptr;
}

User* Duvido::me() {
    return _me;
}

FriendsModel* Duvido::friendsModel() {
    return _friendsModel;
}
