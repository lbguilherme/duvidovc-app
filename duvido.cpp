#include "duvido.hpp"
#include "facebook.hpp"
#include "user.hpp"
#include <QSortFilterProxyModel>

#ifdef Q_OS_ANDROID
#include <vc.duvido.DuvidoActivity.hpp>
using namespace vc::duvido;
#endif

Duvido* duvido;

Duvido::Duvido()
    : QObject(nullptr), _me(nullptr) {

    Q_ASSERT(!duvido);
    duvido = this;

    qRegisterMetaType<User*>("User");
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<DuvidoApi*>("DuvidoApi");
    qRegisterMetaType<QSortFilterProxyModel*>("QSortFilterProxyModel");

    _facebook = new Facebook(this);

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

FriendsModel* Duvido::friendsModel() {
    Q_ASSERT(_me);
    return new FriendsModel(_me->id(), this);
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

void Duvido::fetchPhotoFromCamera() {
    DuvidoActivity::getInstance().fetchPhotoFromCamera();
}

void Duvido::fetchPhotoFromGallery() {
    DuvidoActivity::getInstance().fetchPhotoFromGallery();
}
