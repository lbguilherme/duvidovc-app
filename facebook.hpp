#pragma once

#include "facebookuser.hpp"

#include <QString>
#include <QObject>
#include <QNetworkAccessManager>
#include <functional>

class QUrlQuery;

class Facebook : public QObject{
    Q_OBJECT
    Q_PROPERTY(QString accessToken READ accessToken WRITE setAccessToken NOTIFY accessTokenChanged)
    Q_PROPERTY(FacebookUser* me READ me NOTIFY meChanged)
public:

    Facebook();
    void initialize();
    Q_INVOKABLE void login();

    QString accessToken() const;
    void setAccessToken(const QString& value);

    FacebookUser* me() const;

signals:

    void meChanged();
    void accessTokenChanged();
    void javaCallbackLoginSuccess();
    void javaCallbackLoginError();
    void javaCallbackLoginCancel();

private:

    void graphCall(QString method, QString endpoint, QUrlQuery params, const std::function<void(QJsonDocument result)>& callback) const;

private:

    QString _accessToken;
    mutable FacebookUser* _me;
    mutable QNetworkAccessManager _http;

};

extern Facebook* facebook;
