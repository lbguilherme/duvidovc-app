#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>

#include "facebook.hpp"

#ifdef Q_OS_ANDROID
#include "java/src/java-core.hpp"
#endif

int main(int argc, char *argv[])
{
#ifdef Q_OS_ANDROID
    java::initialize();
#endif

    QGuiApplication app(argc, argv);

    Facebook* facebook = new Facebook;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("facebook", facebook);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
