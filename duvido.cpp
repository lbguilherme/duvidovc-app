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
        apiCall("/login", QVariantMap({{"token", facebook->accessToken()}}), [this](QJsonObject resp){
            qDebug() << QJsonDocument(resp).toJson();
            _me = new User(resp["id"].toString());
            emit loggedInChanged();
        });
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
            ;// Connection error

        int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if (status != 200)
            ;// Server error?

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
