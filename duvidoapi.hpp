#pragma once

#include <functional>
#include <QNetworkAccessManager>

class User;

class DuvidoApi {

    static const QString apiUrl;

public:

    DuvidoApi();

    void login(QString token, std::function<void(User*)> callback);
    QUrl avatarUrl(QString id);
    QUrl avatarsUrl(QStringList ids);
    void friends(QString id, std::function<void(QJsonArray)> callback);

private:

    void apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QJsonObject)> callback);
    void apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QJsonArray)> callback);
    void apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QByteArray)> callback);

};
