#include <api/apilogin.hpp>
#include <core/user.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>
#include <QDir>
#include <QFile>

ApiLogin::ApiLogin(QObject* parent) : Api(parent), _cache(false), _changed(true) {
    _reply = duvido->http().post(request("/login", QVariantMap{{"token", duvido->token()}}), QByteArray());
    setupReply();

    QFile cache(QDir::temp().filePath("duvido_last_login"));
    if (cache.exists()) {
        cache.open(QIODevice::ReadOnly);
        QJsonObject obj = QJsonDocument::fromJson(cache.readAll()).object();
        _id = obj["id"].toString();
        _name = obj["name"].toString();
        _cache = true;
    }
}

void ApiLogin::processReply() {
    QJsonObject obj = QJsonDocument::fromJson(_reply->readAll()).object();
    QString id = obj["id"].toString();
    QString name = obj["name"].toString();

    if (_cache && _id == id && _name == name) {
        _changed = false;
        return;
    }

    _id = id;
    _name = name;

    QFile cache(QDir::temp().filePath("duvido_last_login"));
    cache.open(QIODevice::WriteOnly);
    cache.write(QJsonDocument(obj).toJson());
}

bool ApiLogin::hasCache() const {
    return _cache;
}

bool ApiLogin::changedFromCache() const {
    return _changed;
}

User* ApiLogin::user() const {
    return new User(_id, _name);
}