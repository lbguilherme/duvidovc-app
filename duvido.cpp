#include "duvido.hpp"
#include "facebook.hpp"
#include "user.hpp"
#include "duvidoeventfilter.hpp"
#include <QSortFilterProxyModel>
#include <QGuiApplication>

#ifdef Q_OS_ANDROID
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

    qApp->installEventFilter(new DuvidoEventFilter(qApp));

    _facebook = new Facebook(this);

    connect(_facebook, &Facebook::accessTokenChanged, [this]{
        _api.login(_facebook->accessToken(), [this](User* me){
            setMe(me);
        });
    });

    _facebook->initialize();

#ifdef Q_OS_ANDROID
    _activity = DuvidoActivity::getInstance();
    _hasCamera = _activity.hasCamera();
    _hasGallery = _activity.hasGallery();
#else
    _hasCamera = false;
    _hasGallery = false;
#endif
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

bool Duvido::hasCamera() {
    return _hasCamera;
}

bool Duvido::hasGallery() {
    return _hasGallery;
}

void Duvido::fetchPhotoFromCamera() {
#ifdef Q_OS_ANDROID
    _activity.fetchPhotoFromCamera();
#endif
}

void Duvido::fetchPhotoFromGallery() {
#ifdef Q_OS_ANDROID
    _activity.fetchPhotoFromGallery();
#endif
}
