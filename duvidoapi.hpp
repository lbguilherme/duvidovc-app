#pragma once

#include <functional>
#include <QNetworkAccessManager>

class DuvidoApi : public QObject {
    Q_OBJECT

    static const QString apiUrl;

public:

    DuvidoApi();

    Q_INVOKABLE void login(QString token);
    Q_INVOKABLE QString avatar(QString id);
    Q_INVOKABLE void friends(QString id, std::function<void(QJsonArray)> callback);

private:

    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonObject)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonArray)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QByteArray)> callback);

private:

    QNetworkAccessManager* _http;

};

Q_DECLARE_METATYPE(DuvidoApi*)
