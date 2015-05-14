#include "facebook.hpp"

#include <Qt>
#include <QDebug>
#include <QJsonDocument>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>

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
}
