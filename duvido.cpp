#include "duvido.hpp"
#include "facebook.hpp"
#include "user.hpp"

Duvido* duvido;

Duvido::Duvido()
    : QObject(nullptr), _me(nullptr), _friendsModel(new FriendsModel(this)) {

    if (duvido) abort();
    duvido = this;

    qRegisterMetaType<User*>("User");
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<DuvidoApi*>("DuvidoApi");

    _facebook = new Facebook;

    connect(_facebook, &Facebook::accessTokenChanged, [this]{
        _api.login(_facebook->accessToken(), [this](User* me){
            setMe(me);
        });
    });

    _facebook->initialize();
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
    _me = me;
    if (_me) _friendsModel->refresh(_me->id());
    emit meChanged();
}
