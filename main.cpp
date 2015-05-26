#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QScreen>

#include "duvido.hpp"

#ifdef Q_OS_ANDROID
#include "java/src/java-core.hpp"
#endif

#include "globalbackdetector.hpp"

__attribute__((visibility("default")))
int main(int argc, char *argv[])
{
#ifdef Q_OS_ANDROID
    java::initialize();
#endif

    QGuiApplication app(argc, argv);
    app.installEventFilter(new GlobalBackDetector);
    auto dpi = app.screens().at(0)->physicalDotsPerInch();

    QQuickView view;
    view.rootContext()->setContextProperty("duvido", new Duvido);
    view.rootContext()->setContextProperty("dp", qMax(1.0, dpi/160));
    view.rootContext()->setContextProperty("window", 0);

    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));

    view.show();
    return app.exec();
}
