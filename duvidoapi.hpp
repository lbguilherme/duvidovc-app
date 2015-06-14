#pragma once

#include <functional>
#include <QNetworkAccessManager>

class User;

class DuvidoApi : public QObject {
    Q_OBJECT

    static const QString apiUrl;

public:

    DuvidoApi();

    void login(QString token, std::function<void(User*)> callback);
    QString avatar(QString id);
    void friends(QString id, std::function<void(QJsonArray)> callback);

private:

    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonObject)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonArray)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QByteArray)> callback);

private:

    QNetworkAccessManager* _http;

};
