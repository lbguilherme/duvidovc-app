#pragma once

#include "user.hpp"
#include "friendsmodel.hpp"
#include "facebook.hpp"
#include "duvidoapi.hpp"

#include <QObject>
#include <QMap>
#include <QNetworkAccessManager>
#include <functional>

namespace vc { namespace duvido { class FacebookBridge; } }

class Duvido : public QObject {
    Q_OBJECT
    Q_PROPERTY(User* me READ me WRITE setMe NOTIFY meChanged)
    Q_PROPERTY(FriendsModel* friendsModel READ friendsModel CONSTANT)
    Q_PROPERTY(DuvidoApi* api READ api CONSTANT)

    friend class vc::duvido::FacebookBridge;

public:

    Duvido();

    Q_INVOKABLE DuvidoApi* api();
    Q_INVOKABLE void login();

    User* me();
    FriendsModel* friendsModel();

    void setMe(User* me);

signals:

    void meChanged();

private:

    DuvidoApi _api;
    Facebook* _facebook;
    User* _me;
    FriendsModel* _friendsModel;

};

extern Duvido* duvido;

Q_DECLARE_METATYPE(Duvido*)
