#pragma once

#include <QString>
#include <QObject>

class Facebook : public QObject{
    Q_OBJECT
    Q_PROPERTY(QString accessToken READ accessToken WRITE setAccessToken NOTIFY accessTokenChanged)
public:

    Facebook();
    Q_INVOKABLE void login();

    QString accessToken() const;
    void setAccessToken(const QString& value);

signals:

    void accessTokenChanged();

    void javaCallbackLoginSuccess();
    void javaCallbackLoginError();
    void javaCallbackLoginCancel();

private:

    QString _accessToken;

};

extern Facebook* facebook;
