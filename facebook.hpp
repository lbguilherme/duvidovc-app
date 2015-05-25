#pragma once

#include <QString>
#include <QObject>
#include <QNetworkAccessManager>
#include <functional>

class QUrlQuery;

class Facebook : public QObject{
    Q_OBJECT
    Q_PROPERTY(QString accessToken READ accessToken WRITE setAccessToken NOTIFY accessTokenChanged)

public:

    Facebook(QObject* parent = 0);

    void initialize();
    void login();

    QString accessToken() const;
    void setAccessToken(const QString& value);

signals:

    void accessTokenChanged();
    void javaCallbackLoginSuccess();
    void javaCallbackLoginError();
    void javaCallbackLoginCancel();
    void javaCallbackAccessToken(const QString& value);

private:

    QString _accessToken;

};
