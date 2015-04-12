#pragma once

#include <QString>
#include <QObject>

#ifdef Q_OS_ANDROID
#include <com.facebook.login.LoginManager.hpp>
#include <vc.duvido.FacebookStatusCallback.hpp>

using namespace com::facebook::login;
using namespace vc::duvido;
#endif

class Facebook : public QObject{
    Q_OBJECT
public:

    static constexpr const char* appId = "1497042670584041";

    Facebook();
    Q_INVOKABLE void login();

signals:

    void javaCallbackSuccess();
    void javaCallbackError();
    void javaCallbackCancel();

private:

#ifdef Q_OS_ANDROID
    LoginManager _manager;
    FacebookStatusCallback _statusCallback;
#endif

};

extern Facebook* facebook;
