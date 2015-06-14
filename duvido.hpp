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

#ifdef Q_OS_ANDROID
#include <vc.duvido.DuvidoActivity.hpp>
#endif

namespace vc { namespace duvido { class FacebookBridge; } }

class Duvido : public QObject {
    Q_OBJECT
    Q_PROPERTY(User* me READ me NOTIFY meChanged)
    Q_PROPERTY(bool hasCamera READ hasCamera CONSTANT)
    Q_PROPERTY(bool hasGallery READ hasGallery CONSTANT)

    friend class vc::duvido::FacebookBridge;

public:

    Duvido();

    DuvidoApi* api();

    Q_INVOKABLE void login();
    User* me();
    Q_INVOKABLE FriendsModel* friendsModel();

    bool hasCamera();
    bool hasGallery();
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
    bool _hasCamera;
    bool _hasGallery;

#ifdef Q_OS_ANDROID
    vc::duvido::DuvidoActivity _activity;
#endif

};

extern Duvido* duvido;

Q_DECLARE_METATYPE(Duvido*)
