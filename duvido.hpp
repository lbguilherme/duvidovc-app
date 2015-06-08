#pragma once

#include "user.hpp"
#include "friendsmodel.hpp"
#include "facebook.hpp"
#include "duvidoapi.hpp"

#include <QObject>
#include <QMap>
#include <QNetworkAccessManager>
#include <QImage>
#include <functional>

namespace vc { namespace duvido { class FacebookBridge; } }

class Duvido : public QObject {
    Q_OBJECT
    Q_PROPERTY(User* me READ me NOTIFY meChanged)
    Q_PROPERTY(DuvidoApi* api READ api CONSTANT)

    friend class vc::duvido::FacebookBridge;

public:

    Duvido();

    Q_INVOKABLE DuvidoApi* api();
    Q_INVOKABLE void login();

    User* me();
    Q_INVOKABLE FriendsModel* friendsModel();

    Q_INVOKABLE void fetchPhotoFromGallery();
    Q_INVOKABLE void fetchPhotoFromCamera();

    void setMe(User* me);

signals:

    void meChanged();
    void backPressed();
    void photoFetched(QString path);

private:

    DuvidoApi _api;
    Facebook* _facebook;
    User* _me;

};

extern Duvido* duvido;

Q_DECLARE_METATYPE(Duvido*)
