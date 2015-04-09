#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

#include "facebookmanager.hpp"

#ifdef Q_OS_ANDROID
#include "java/src/java-core.hpp"
#endif

int main(int argc, char *argv[])
{
#ifdef Q_OS_ANDROID
    java::initialize();
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    FacebookManager::initialize();
    FacebookManager::login();

    return app.exec();
}
