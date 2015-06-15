#pragma once

class User;
class QUrl;
class QString;
class QVariant;
class QStringList;
template <typename A, typename B> class QMap;
template <typename A> class QList;
class QByteArray;
class QJsonArray;
class QJsonObject;
namespace std {
template <typename A> class function;
}

class DuvidoApi {

    static const QString apiUrl;

public:

    DuvidoApi();

    void login(QString token, std::function<void(User*)> callback);
    QUrl avatarUrl(QString id);
    QUrl avatarsUrl(QStringList ids);
    void friends(QString id, std::function<void(QList<User*>)> callback);
    void createChallenge(QString title, QString description, QString reward, QStringList targets,
                         unsigned duration, QByteArray image, std::function<void(QString)> callback);

private:

    void apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QJsonObject)> callback);
    void apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QJsonArray)> callback);
    void apiCall(QString method, QString endpoint, QMap<QString, QVariant> args, QByteArray data, std::function<void(QByteArray)> callback);

};
