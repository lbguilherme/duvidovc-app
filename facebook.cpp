#include "facebook.hpp"

#include <Qt>
#include <QSettings>

#ifdef Q_OS_ANDROID
#include <vc.duvido.FacebookBridge.hpp>
using namespace vc::duvido;
#endif

Facebook::Facebook(QObject* parent) : QObject(parent) {

}

void Facebook::initialize() {
#ifdef Q_OS_ANDROID
    FacebookBridge::initialize();
    connect(this, &Facebook::javaCallbackAccessToken, this, &Facebook::setAccessToken, Qt::QueuedConnection);
#endif
    setAccessToken(QSettings().value("token").toString());
}

void Facebook::login() {
    if (!_accessToken.isEmpty()) return;

#ifdef Q_OS_ANDROID
    FacebookBridge::login();
#else
    setAccessToken("dummy");
#endif
}

QString Facebook::accessToken() const {
    return _accessToken;
}

void Facebook::setAccessToken(const QString& value) {
    if (_accessToken == value) return;
    _accessToken = value;
    emit accessTokenChanged();

    if (!_accessToken.isEmpty())
        QSettings().setValue("token", _accessToken);
}
