#include "duvido.hpp"
#include "facebook.hpp"
#include "user.hpp"

#include <QDebug>

Duvido* duvido;

Duvido::Duvido()
    : QObject(nullptr), _me(nullptr), _friendsModel(nullptr) {

    qRegisterMetaType<User*>("User");
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<DuvidoApi*>("DuvidoApi");

    _facebook = new Facebook;
    _facebook->initialize();

    connect(_facebook, &Facebook::accessTokenChanged, [this]{
        _api.login(_facebook->accessToken());
    });
}

DuvidoApi* Duvido::api() {
    return &_api;
}

void Duvido::login() {
    _facebook->login();
}

User* Duvido::me() {
    return _me;
}

void Duvido::setMe(User* me) {
    if (_me == me) return;
    if (_me) _me->deleteLater();
    _me = me;
    emit meChanged();
}

FriendsModel* Duvido::friendsModel() {
    return _friendsModel;
}
