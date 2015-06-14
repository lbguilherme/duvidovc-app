#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QQmlEngine>
#include <QScreen>

#include "duvido.hpp"
#include "avatarprovider.hpp"
#include "globalbackdetector.hpp"

#ifdef Q_OS_ANDROID
#include "java/src/java-core.hpp"
#endif

__attribute__((visibility("default")))
int main(int argc, char *argv[]) {
#ifdef Q_OS_ANDROID
    java::initialize();
#endif

    QGuiApplication app(argc, argv);
    app.installEventFilter(new GlobalBackDetector(&app));
    auto dpi = app.screens().at(0)->physicalDotsPerInch();

    Duvido d; (void)d;

    QQuickView view;
    view.engine()->addImageProvider("avatar", new AvatarProvider);
    view.rootContext()->setContextProperty("duvido", duvido);
    view.rootContext()->setContextProperty("dp", qMax(1.0, dpi/160));
    view.rootContext()->setContextProperty("window", 0);
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    view.show();

    QObject::connect(view.engine(), &QQmlEngine::quit, [&]{
        app.quit();
    });

    return app.exec();
}
