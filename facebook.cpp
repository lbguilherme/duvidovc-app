#include "facebook.hpp"

#include <Qt>
#include <QDebug>
#include <QJsonDocument>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>

Facebook* facebook;

#ifdef Q_OS_ANDROID
#include <vc.duvido.FacebookBridge.hpp>

using namespace vc::duvido;
#endif

Facebook::Facebook() : _me(new FacebookUser) {
    qRegisterMetaType<FacebookUser*>("FacebookUser");
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

void Facebook::graphCall(QString method, QString endpoint, QUrlQuery params, const std::function<void(QJsonDocument result)>& callback) const {
    params.addQueryItem("access_token", _accessToken);
    QUrl url("https://graph.facebook.com");
    url.setPath(endpoint);
    url.setQuery(params);

    QNetworkReply* reply;
    if (method == "get")
        reply = _http.get(QNetworkRequest(url));
    else
        reply = _http.post(QNetworkRequest(url), "");

    connect(reply, &QNetworkReply::finished, [reply, callback]{
        auto data = QJsonDocument::fromJson(reply->readAll());
        reply->deleteLater();
        callback(data);
    });
}

QString Facebook::accessToken() const {
    return _accessToken;
}

void Facebook::setAccessToken(const QString& value) {
    if (_accessToken == value) return;
    _accessToken = value;
    emit accessTokenChanged();
}

FacebookUser* Facebook::me() const {
    if (_me->isDummy()) {
        graphCall("get", "/me", QUrlQuery(), [this](QJsonDocument data){
            _me->deleteLater();
            _me = new FacebookUser(data);
            emit meChanged();
        });
    }
    return _me;
}
