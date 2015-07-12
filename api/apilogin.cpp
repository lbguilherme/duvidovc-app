#include <api/apilogin.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonDocument>
#include <QNetworkReply>
#include <QDir>
#include <QFile>

ApiLogin::ApiLogin(QObject* parent) : Api(parent), _cache(false), _changed(true) {
    sendRequest();

    QFile cache(QDir::temp().filePath("duvido_last_login"));
    if (cache.exists()) {
        cache.open(QIODevice::ReadOnly);
        QJsonObject obj = QJsonDocument::fromJson(cache.readAll()).object();
        _id = obj["id"].toString();
        _name = obj["name"].toString();
        _firstName = obj["firstName"].toString();
        _lastName = obj["lastName"].toString();
        _cache = true;
    }
}

void ApiLogin::sendRequest() {
    _reply = duvido->http().post(request("/login", QVariantMap{{"token", duvido->token()}}), QByteArray());
    setupReply();
}

void ApiLogin::processReply() {
    QFile cache(QDir::temp().filePath("duvido_last_login"));

    if (status() == 401) {
        _id = "";
        _name = "";
        _firstName = "";
        _lastName = "";
        cache.remove();
    } else {
        QJsonObject obj = QJsonDocument::fromJson(_reply->readAll()).object();
        QString id = obj["id"].toString();
        QString name = obj["name"].toString();
        QString firstName = obj["firstName"].toString();
        QString lastName = obj["lastName"].toString();

        if (_cache && _id == id && _name == name && _firstName == name && _lastName == name) {
            _changed = false;
            return;
        }

        _id = id;
        _name = name;
        _firstName = firstName;
        _lastName = lastName;

        cache.open(QIODevice::WriteOnly);
        cache.write(QJsonDocument(obj).toJson());
    }
}

bool ApiLogin::canHandleError() {
    return status() == 401;
}

bool ApiLogin::hasCache() const {
    return _cache;
}

bool ApiLogin::changedFromCache() const {
    return _changed;
}

QString ApiLogin::id() const {
    return _id;
}

QString ApiLogin::name() const {
    return _name;
}

QString ApiLogin::firstName() const {
    return _firstName;
}

QString ApiLogin::lastName() const {
    return _lastName;
}
