#include <vc.duvido.FacebookBridge.hpp>
#include <com.facebook.AccessToken.hpp>
#include <java.lang.String.hpp>
#include <facebook.hpp>

#include <QDebug>

using namespace vc::duvido;
using namespace com::facebook;

void FacebookBridge::onLoginSuccess() {
    emit facebook->javaCallbackLoginSuccess();
}

void FacebookBridge::onLoginError() {
    emit facebook->javaCallbackLoginError();
}

void FacebookBridge::onLoginCancel() {
    emit facebook->javaCallbackLoginCancel();
}

void FacebookBridge::onAccessTokenReceived(const AccessToken& token) {
    if (token.isNull()) return;
    facebook->setAccessToken(token.getToken());
}
