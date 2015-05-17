#include "facebook.hpp"

#include <Qt>
#include <QSettings>

#ifdef Q_OS_ANDROID
#include <vc.duvido.FacebookBridge.hpp>

using namespace vc::duvido;
#endif

Facebook::Facebook() {

}

void Facebook::initialize() {
#ifdef Q_OS_ANDROID
    FacebookBridge::initialize();
    connect(this, &Facebook::javaCallbackAccessToken, this, &Facebook::setAccessToken, Qt::QueuedConnection);
#endif
    QSettings settings;
    setAccessToken(settings.value("token").toString());
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
    QSettings settings;
    settings.setValue("token", _accessToken);
    emit accessTokenChanged();
}
