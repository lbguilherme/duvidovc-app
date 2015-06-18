#pragma once

#include "duvidoapi.hpp"

#include <QGuiApplication>
#include <QNetworkAccessManager>
#include <QQuickView>

#ifdef Q_OS_ANDROID
#include <vc.duvido.DuvidoActivity.hpp>
#endif

class Facebook;

class Duvido : public QGuiApplication {
    Q_OBJECT
    Q_PROPERTY(User* me READ me NOTIFY meChanged)
    Q_PROPERTY(bool hasCamera READ hasCamera CONSTANT)
    Q_PROPERTY(bool hasGallery READ hasGallery CONSTANT)

public:

    Duvido();

    QNetworkAccessManager& http();

    DuvidoApi* api();
    Facebook* facebook();

    User* me();
    bool hasCamera();
    bool hasGallery();

    void setMe(User* me);

    Q_INVOKABLE void login();
    Q_INVOKABLE void fetchPhotoFromGallery();
    Q_INVOKABLE void fetchPhotoFromCamera();

signals:

    void meChanged();
    void backPressed();
    void photoFetched(QString path);

private:

    void initInterfaces();
    void initFacebook();
    void initView();

private:

    DuvidoApi _api;
    Facebook* _facebook;
    User* _me;
    bool _hasCamera;
    bool _hasGallery;
    QNetworkAccessManager _http;
    QQuickView _view;

#ifdef Q_OS_ANDROID
    vc::duvido::DuvidoActivity _activity;
#endif

};

extern Duvido* duvido;

Q_DECLARE_METATYPE(Duvido*)
