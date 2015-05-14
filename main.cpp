#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>

#include "duvido.hpp"
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

    duvido = new Duvido;

    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("duvido", duvido);

    // These properties are set by main.qml
    // They are only set here to aid QtCreator code completion
    // This has no runtime impact
    engine.rootContext()->setContextProperty("windowWidth", 0);
    engine.rootContext()->setContextProperty("windowHeight", 0);
    engine.rootContext()->setContextProperty("dpi", 0);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
