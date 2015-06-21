#pragma once

#include <QGuiApplication>
#include <QNetworkAccessManager>
#include <QQuickView>

#ifdef Q_OS_ANDROID
#include <vc.duvido.DuvidoActivity.hpp>
#endif

class Facebook;
class User;
class AvatarManager;

class Duvido : public QGuiApplication {
    Q_OBJECT
    Q_PROPERTY(User* me READ me NOTIFY meChanged)
    Q_PROPERTY(QString terms READ terms CONSTANT)
    Q_PROPERTY(bool hasCamera READ hasCamera CONSTANT)
    Q_PROPERTY(bool hasGallery READ hasGallery CONSTANT)
    Q_PROPERTY(QString token READ token NOTIFY tokenChanged)

public:

    Duvido();

    QNetworkAccessManager& http();

    Facebook* facebook();
    QString token();
    AvatarManager* avatarManager();

    User* me();
    bool hasCamera() const;
    bool hasGallery() const;
    QString terms() const;

    void setMe(User* me);

    Q_INVOKABLE void login();
    Q_INVOKABLE void fetchPhotoFromGallery();
    Q_INVOKABLE void fetchPhotoFromCamera();

signals:

    void meChanged();
    void backPressed();
    void photoFetched(QString path);
    void tokenChanged();

private:

    void initInterfaces();
    void initFacebook();
    void initView();

private:

    Facebook* _facebook;
    User* _me;
    AvatarManager* _avatarManager;
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
