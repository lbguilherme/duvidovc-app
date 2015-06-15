#include "duvido.hpp"
#include "facebook.hpp"
#include "user.hpp"
#include "duvidoeventfilter.hpp"
#include "avatarloader.hpp"
#include "friendsmodel.hpp"

#include <QSortFilterProxyModel>

#include <functional>

#ifdef Q_OS_ANDROID
using namespace vc::duvido;
#endif

Duvido* duvido;

static int argc = 1;
static char argv0[] = "duvido";
static char* argv[] = {argv0, 0};

Duvido::Duvido()
    : QGuiApplication(argc, argv)
    , _me(nullptr)
    #ifdef Q_OS_ANDROID
    , _activity(DuvidoActivity::getInstance())
    #endif
{
    Q_ASSERT(!duvido);
    duvido = this;

    qRegisterMetaType<User*>("User");
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<DuvidoApi*>("DuvidoApi");
    qRegisterMetaType<QSortFilterProxyModel*>("QSortFilterProxyModel");

    qmlRegisterType<AvatarLoader>("Duvido", 1, 0, "AvatarLoader");

    installEventFilter(new DuvidoEventFilter(this));

    _facebook = new Facebook(this);

    connect(_facebook, &Facebook::accessTokenChanged, [this]{
        _api.login(_facebook->accessToken(), [this](User* me){
            setMe(me);
        });
    });

    _facebook->initialize();

#ifdef Q_OS_ANDROID
    _hasCamera = _activity.hasCamera();
    _hasGallery = _activity.hasGallery();
#else
    _hasCamera = false;
    _hasGallery = false;
#endif
}

QNetworkAccessManager& Duvido::http() {
    return _http;
}

DuvidoApi* Duvido::api() {
    return &_api;
}

Facebook* Duvido::facebook() {
    return _facebook;
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
