#include <vc.duvido.FacebookBridge.hpp>
#include <com.facebook.AccessToken.hpp>
#include <java.lang.String.hpp>
#include <duvido.hpp>

#include <QDebug>

using namespace vc::duvido;
using namespace com::facebook;

void FacebookBridge::onLoginSuccess() {
    emit ::duvido->facebook()->javaCallbackLoginSuccess();
}

void FacebookBridge::onLoginError() {
    emit ::duvido->facebook()->javaCallbackLoginError();
}

void FacebookBridge::onLoginCancel() {
    emit ::duvido->facebook()->javaCallbackLoginCancel();
}

void FacebookBridge::onAccessTokenReceived(const AccessToken& token) {
    if (token.isNull()) return;
    emit ::duvido->facebook()->javaCallbackAccessToken(token.getToken());
}
