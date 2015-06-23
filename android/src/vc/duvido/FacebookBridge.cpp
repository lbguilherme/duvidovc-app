#include <vc.duvido.FacebookBridge.hpp>
#include <java.lang.String.hpp>
#include <core/duvido.hpp>

using namespace vc::duvido;
using namespace java::lang;

void FacebookBridge::onLoginSuccess() {
    // TODO
}

void FacebookBridge::onLoginError() {
    // TODO
}

void FacebookBridge::onLoginCancel() {
    // TODO
}

void FacebookBridge::onAccessTokenReceived(const String& token) {
    if (token.isNull()) return;
    // This method must be invoked on duvido's thread. QueuedConnection will launch a QEvent on the right thread.
    Duvido::staticMetaObject.invokeMethod(::duvido, "setToken", Qt::QueuedConnection, Q_ARG(QString, token));
}
