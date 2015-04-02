#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

#ifdef Q_OS_ANDROID
#include <QtAndroid>
#include <QAndroidJniEnvironment>
#include <java.lang.String.hpp>
#include <com.facebook.Session.hpp>
using namespace java::lang;
#endif

#include "facebookmanager.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

#ifdef Q_OS_ANDROID
    QAndroidJniEnvironment jniEnv;
    QAndroidJniObject act = QtAndroid::androidActivity();
    java::jni = jniEnv;
    java::ref = java::jni->NewGlobalRef(act.object());

    String s("teste");
    qDebug() << s._class;
    qDebug() << s.obj;
    qDebug() << s.length();
    qDebug() << s._class;

    //qDebug() << com::facebook::Session::getActiveSession().isOpened();
#endif

    //FacebookManager::login();

    return app.exec();
}
