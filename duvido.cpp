#include "duvido.hpp"
#include "facebook.hpp"
#include "user.hpp"

#include <QDebug>

Duvido* duvido;

Duvido::Duvido()
    : QObject(nullptr), _me(nullptr), _friendsModel(nullptr) {

    if (duvido) abort();
    duvido = this;

    qRegisterMetaType<User*>("User");
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<DuvidoApi*>("DuvidoApi");

    _facebook = new Facebook;
    _facebook->initialize();

    connect(_facebook, &Facebook::accessTokenChanged, [this]{
        _api.login(_facebook->accessToken(), [this](User* me){
            setMe(me);
        });
    });
}

DuvidoApi* Duvido::api() {
    return &_api;
}

void Duvido::login() {
    _facebook->login();
}

FriendsModel* Duvido::friends() {
    Q_ASSERT(_friendsModel);
    return _friendsModel;
}

User* Duvido::me() {
    return _me;
}

void Duvido::setMe(User* me) {
    if (_me == me) return;
    if (_me) _me->deleteLater();
    if (_friendsModel) _friendsModel->deleteLater();
    _me = me;
    _friendsModel = new FriendsModel(me->id());
    emit meChanged();
}
