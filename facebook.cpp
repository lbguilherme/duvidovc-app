#include "facebook.hpp"

#include <Qt>
#include <QDebug>

Facebook* facebook;

#ifdef Q_OS_ANDROID
#include <vc.duvido.FacebookBridge.hpp>

using namespace vc::duvido;
#endif

Facebook::Facebook() {
#ifdef Q_OS_ANDROID
    FacebookBridge::initialize();
#endif
}

void Facebook::login() {
    if (!_accessToken.isEmpty()) return;

#ifdef Q_OS_ANDROID
    FacebookBridge::login();
#endif
}

QString Facebook::accessToken() const {
    return _accessToken;
}

void Facebook::setAccessToken(const QString& value) {
    if (_accessToken == value) return;
    _accessToken = value;
    emit accessTokenChanged();
}

