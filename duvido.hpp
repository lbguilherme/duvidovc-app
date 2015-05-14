#pragma once

#include "user.hpp"
#include "friendsmodel.hpp"
#include "facebook.hpp"

#include <QObject>
#include <QMap>
#include <QNetworkAccessManager>
#include <functional>

namespace vc { namespace duvido { class FacebookBridge; } }

class Duvido : public QObject {
    Q_OBJECT
    Q_PROPERTY(bool loggedIn READ loggedIn NOTIFY loggedInChanged)
    Q_PROPERTY(User* me READ me CONSTANT)
    Q_PROPERTY(FriendsModel* friendsModel READ friendsModel CONSTANT)

    friend class vc::duvido::FacebookBridge;

public:

    static const QString apiUrl;

    Duvido();

    Q_INVOKABLE QString avatarUrl(QString id) const;
    Q_INVOKABLE void login();

    void login(QString token);
    void friends(QString id, std::function<void(QJsonArray)> callback);

    bool loggedIn();
    User* me();
    FriendsModel* friendsModel();

signals:

    void loggedInChanged();

private:

    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonObject)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonArray)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QByteArray)> callback);

    Facebook* _facebook;
    User* _me;
    FriendsModel* _friendsModel;
    QNetworkAccessManager* _http;

};

extern Duvido* duvido;
