#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QScreen>

#include "duvido.hpp"

#ifdef Q_OS_ANDROID
#include "java/src/java-core.hpp"
#endif

__attribute__((visibility("default")))
int main(int argc, char *argv[])
{
#ifdef Q_OS_ANDROID
    java::initialize();
#endif

    QGuiApplication app(argc, argv);
    auto dpi = app.screens().at(0)->physicalDotsPerInch();

    new Duvido;

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.rootContext()->setContextProperty("duvido", duvido);
    view.rootContext()->setContextProperty("dp", qMax(1.0, dpi/160));
    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));

    // These properties are set by main.qml
    // They are only set here to aid QtCreator code completion
    // This has no runtime impact
    view.rootContext()->setContextProperty("windowWidth", 0);
    view.rootContext()->setContextProperty("windowHeight", 0);

    view.show();
    return app.exec();
}
