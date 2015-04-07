#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

#ifdef Q_OS_ANDROID
#include <QtAndroid>
#include <QAndroidJniEnvironment>
#include <java.lang.String.hpp>
#include <com.facebook.login.LoginManager.hpp>
using namespace java::lang;
#endif

#include "facebookmanager.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

#ifdef Q_OS_ANDROID
    //qDebug() << com::facebook::login::LoginManager::getInstance().obj;
#endif

    //FacebookManager::login();

    return app.exec();
}
