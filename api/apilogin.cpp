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
        _birthday = QDate::fromString(obj["birthday"].toString(), "MM/dd/yyyy");
        _gender = obj["gender"].toString();
        _email = obj["email"].toString();
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
        _birthday = QDate();
        _gender = "";
        _email = "";
        cache.remove();
    } else {
        QJsonObject obj = QJsonDocument::fromJson(_reply->readAll()).object();
        QString id = obj["id"].toString();
        QString name = obj["name"].toString();
        QString firstName = obj["firstName"].toString();
        QString lastName = obj["lastName"].toString();
        QDate birthday = QDate::fromString(obj["birthday"].toString(), "MM/dd/yyyy");
        QString gender = obj["gender"].toString();
        QString email = obj["email"].toString();

        if (_cache && _id == id && _name == name && _firstName == firstName && _lastName == lastName
                && _birthday == birthday && _gender == gender && _email == email) {
            _changed = false;
            return;
        }

        _id = id;
        _name = name;
        _firstName = firstName;
        _lastName = lastName;
        _birthday = birthday;
        _gender = gender;
        _email = email;

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

QString ApiLogin::gender() const {
    return _gender;
}

QDate ApiLogin::birthday() const {
    return _birthday;
}

QString ApiLogin::email() const {
    return _email;
}
