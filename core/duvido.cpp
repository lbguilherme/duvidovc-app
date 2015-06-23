#include <core/duvido.hpp>
#include <core/facebook.hpp>
#include <core/duvidoeventfilter.hpp>
#include <qml/avatarloader.hpp>
#include <qml/friendsmodel.hpp>
#include <qml/challengecreator.hpp>
#include <api/apilogin.hpp>
#include <core/avatarmanager.hpp>

#include <QSortFilterProxyModel>
#include <QQmlContext>
#include <QQmlEngine>
#include <QScreen>
#include <QtQml>

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
    , _avatarManager(new AvatarManager(this))
    #ifdef Q_OS_ANDROID
    , _activity(DuvidoActivity::getInstance())
    #endif
{
    Q_ASSERT(!duvido);
    duvido = this;

    initInterfaces();
    initFacebook();
    initView();

#ifdef Q_OS_ANDROID
    _hasCamera = _activity.hasCamera();
    _hasGallery = _activity.hasGallery();
#else
    _hasCamera = false;
    _hasGallery = false;
#endif
}

void Duvido::initInterfaces() {
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<QSortFilterProxyModel*>("QSortFilterProxyModel");

    qmlRegisterType<AvatarLoader>("Duvido", 1, 0, "AvatarLoader");
    qmlRegisterType<ChallengeCreator>("Duvido", 1, 0, "ChallengeCreator");
    qmlRegisterType<FriendsModel>("Duvido", 1, 0, "FriendsModel");

    installEventFilter(new DuvidoEventFilter(this));
}

void Duvido::initFacebook() {
    _facebook = new Facebook(this);

    connect(_facebook, &Facebook::accessTokenChanged, [this]{
        emit tokenChanged();
        if (token().isEmpty()) {
            setMe("", "");
        } else {
            qDebug() << "Your access token:" << token();
            auto result = new ApiLogin(this);
            if (result->hasCache())
                setMe(result->id(), result->name());
            connect(result, &Api::finished, [this, result]{
                result->deleteLater();
                if (result->changedFromCache())
                    setMe(result->id(), result->name());
            });
        }
    });

    _facebook->initialize();
}

void Duvido::initView() {
    auto dpi = screens().at(0)->physicalDotsPerInch();

    QQmlContext* root = _view.rootContext();

    root->setContextProperty("duvido", duvido);
    root->setContextProperty("dp", qMax(1.0, dpi/160));
    root->setContextProperty("window", 0);
    _view.setResizeMode(QQuickView::SizeRootObjectToView);
    _view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    _view.show();

    connect(_view.engine(), &QQmlEngine::quit, this, &QCoreApplication::quit);
}

QNetworkAccessManager& Duvido::http() {
    return _http;
}

Facebook* Duvido::facebook() {
    return _facebook;
}

QString Duvido::token() {
    return _facebook->accessToken();
}

AvatarManager* Duvido::avatarManager() {
    return _avatarManager;
}

void Duvido::login() {
    _facebook->login();
}

QString Duvido::myId() {
    return _myId;
}

QString Duvido::myName() {
    return _myName;
}

void Duvido::setMe(QString id, QString name) {
    if (_myId == id && _myName == name) return;
    _myId = id;
    _myName = name;
    emit meChanged();
}

QString Duvido::terms() const {
    QFile file(":/terms.htm");
    file.open(QIODevice::ReadOnly);
    return QString::fromUtf8(file.readAll());
}

bool Duvido::hasCamera() const {
    return _hasCamera;
}

bool Duvido::hasGallery() const {
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
