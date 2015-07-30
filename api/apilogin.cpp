#include <api/apilogin.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>
#include <QDir>
#include <QFile>
#include <QScreen>

#ifdef Q_OS_ANDROID
#include <vc.duvido.DuvidoActivity.hpp>
#include <java.lang.String.hpp>
using namespace vc::duvido;
#endif

ApiLogin::ApiLogin(QObject* parent) : Api(parent), _cache(false), _changed(true) {
    sendRequest();

    QFile cache(QDir::temp().filePath("duvido_last_login"));
    if (cache.exists()) {
        cache.open(QIODevice::ReadOnly);
        QJsonObject obj = QJsonDocument::fromJson(cache.readAll()).object();
        _me.fromJson(obj);
        _cache = true;
    }
}

void ApiLogin::sendRequest() {
#ifdef Q_OS_ANDROID
    DuvidoActivity activity = DuvidoActivity::getInstance();
#endif

    auto dpi = duvido->screens().at(0)->physicalDotsPerInch();
    auto size = duvido->screens().at(0)->size();

    QVariantMap args{
        {"token", duvido->token()},
        {"version", duvido->version()},
        {"dpi", dpi},
        {"width", size.width()},
        {"height", size.height()},
#ifdef Q_OS_ANDROID
        {"phone", (QString)activity.getPhoneNumber()},
        {"android", (QString)activity.getAndroidVersion()},
        {"device", (QString)activity.getDeviceName()},
        {"brand", (QString)activity.getDeviceBrand()},
        {"model", (QString)activity.getDeviceModel()},
        {"method", activity.hasFacebookApp() ? "Facebook App" : "Facebook Web OAuth"},
        {"playservices", activity.hasGooglePlayServices() ? "Yes" : "No"},
#else
        {"method", "Desktop"},
#endif
    };

    _reply = duvido->http().post(request("/login", args), QByteArray());
    setupReply();
}

void ApiLogin::processReply() {
    QFile cache(QDir::temp().filePath("duvido_last_login"));

    if (status() == 401) {
        _me = Me();
        cache.remove();
    } else {
        QJsonObject obj = QJsonDocument::fromJson(_reply->readAll()).object();
        Me newMe = Me().fromJson(obj);

        if (_cache && newMe == _me) {
            _changed = false;
            return;
        }

        _me = newMe;

        cache.open(QIODevice::WriteOnly);
        cache.write(QJsonDocument(obj).toJson());
    }
}

bool ApiLogin::hasCache() const {
    return _cache;
}

bool ApiLogin::changedFromCache() const {
    return _changed;
}
