#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>

#include "facebookmanager.hpp"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    FacebookManager::initialize();
    FacebookManager::login();

    return app.exec();
}
