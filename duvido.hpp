#pragma once

#include "user.hpp"
#include "friendsmodel.hpp"

#include <QObject>
#include <QMap>
#include <QNetworkAccessManager>
#include <functional>

class Duvido : public QObject {
    Q_OBJECT
    Q_PROPERTY(bool loggedIn READ loggedIn NOTIFY loggedInChanged)
    Q_PROPERTY(User* me READ me CONSTANT)
    Q_PROPERTY(FriendsModel* friendsModel READ friendsModel CONSTANT)

public:

    static const QString apiUrl;

    Duvido();

    Q_INVOKABLE QString avatarUrl(QString id) const;


    bool loggedIn();
    User* me();
    FriendsModel* friendsModel();

signals:

    void loggedInChanged();

private:

    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonObject)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QJsonArray)> callback);
    void apiCall(QString endpoint, QMap<QString, QVariant> args, std::function<void(QByteArray)> callback);
    User* _me;
    FriendsModel* _friendsModel;
    QNetworkAccessManager* _http;

};

extern Duvido* duvido;
