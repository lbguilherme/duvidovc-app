#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QDebug>

#include "facebook.hpp"
#include "facebookavatarprovider.hpp"

#ifdef Q_OS_ANDROID
#include "java/src/java-core.hpp"
#endif

int main(int argc, char *argv[])
{
#ifdef Q_OS_ANDROID
    java::initialize();
#endif

    QGuiApplication app(argc, argv);

    facebook = new Facebook;
    facebook->initialize();

    QQmlApplicationEngine engine;
    engine.addImageProvider(QLatin1String("avatar"), new FacebookAvatarProvider);
    engine.rootContext()->setContextProperty("facebook", facebook);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
