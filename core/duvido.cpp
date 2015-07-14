#include <core/duvido.hpp>
#include <core/duvidoeventfilter.hpp>
#include <qml/avatarloader.hpp>
#include <qml/friendsmodel.hpp>
#include <qml/mychallengesmodel.hpp>
#include <qml/challengecreator.hpp>
#include <api/apilogin.hpp>
#include <core/avatarmanager.hpp>
#include <core/postingchallenge.hpp>

#include <QSortFilterProxyModel>
#include <QQmlContext>
#include <QQmlEngine>
#include <QScreen>
#include <QSettings>
#include <QtQml>

#include <functional>

#ifdef Q_OS_ANDROID
#include <vc.duvido.FacebookBridge.hpp>
#include <vc.duvido.Tracker.hpp>
#include <java.lang.String.hpp>
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
}

void Duvido::initInterfaces() {
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<MyChallengesModel*>("MyChallengesModel");
    qRegisterMetaType<QSortFilterProxyModel*>("QSortFilterProxyModel");

    qmlRegisterType<AvatarLoader>("Duvido", 1, 0, "AvatarLoader");
    qmlRegisterType<ChallengeCreator>("Duvido", 1, 0, "ChallengeCreator");
    qmlRegisterType<FriendsModel>("Duvido", 1, 0, "FriendsModel");
    qmlRegisterType<MyChallengesModel>("Duvido", 1, 0, "MyChallengesModel");

    installEventFilter(new DuvidoEventFilter(this));
}

void Duvido::initFacebook() {
#ifdef Q_OS_ANDROID
    FacebookBridge::initialize();
#endif
    setToken(QSettings().value("token").toString());
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

QString Duvido::token() const {
    return _token;
}

void Duvido::setToken(QString token) {
    if (_token == token) return;
    _token = token;
    emit tokenChanged();
    QSettings().setValue("token", _token);

    if (_token.isEmpty()) {
        unsetMe();
    } else {
        qDebug() << "Your access token:" << _token;
        auto result = new ApiLogin(this);
        if (result->hasCache())
            setMe(result);
        connect(result, &Api::finished, [this, result]{
            result->deleteLater();
            if (result->status() == 401)
                unsetMe();
            else if (result->changedFromCache())
                setMe(result);
        });
    }
}

AvatarManager* Duvido::avatarManager() {
    return _avatarManager;
}

void Duvido::login() {
    if (!_token.isEmpty()) return;

#ifdef Q_OS_ANDROID
    FacebookBridge::login();
#else
    setToken("dummy");
#endif
}

void Duvido::logout() {
    setToken("");
}

QString Duvido::myId() const {
    return _myId;
}

QString Duvido::myName() const {
    return _myName;
}

void Duvido::unsetMe() {
    setToken("");
    if (_myId == "") return;
    _myId = "";
    _myName = "";
    emit meChanged();


}

void Duvido::setMe(const ApiLogin* apiLogin) {
    if (_myId == apiLogin->id() && _myName == apiLogin->name()) return;
    _myId = apiLogin->id();
    _myName = apiLogin->name();
    emit meChanged();

#ifdef Q_OS_ANDROID
    Tracker::identify(apiLogin->id());
    Tracker::setUserProperty("$username", apiLogin->id());
    Tracker::setUserProperty("$name", apiLogin->name());
    Tracker::setUserProperty("$first_name", apiLogin->firstName());
    Tracker::setUserProperty("$last_name", apiLogin->lastName());
    Tracker::setUserPropertyOnce("$created", QDateTime::currentDateTimeUtc().toString(Qt::ISODate));
    Tracker::setUserProperty("Birthday", apiLogin->birthday().toString(Qt::ISODate));
    Tracker::setUserProperty("Gender", apiLogin->gender());
    Tracker::setUserProperty("Access Token", token());
    Tracker::setUserProperty("Api Version", Api::version);
    Tracker::incrementUserProperty("Login Count", 1);
    QJsonObject params;
    params["Username"] = apiLogin->id();
    params["Access Token"] = token();
    params["Api Version"] = Api::version;
    Tracker::event("Logged in", QJsonDocument(params).toJson());
    Tracker::flush();
#endif
}

QString Duvido::terms() const {
#ifdef Q_OS_ANDROID
    Tracker::event("Viewed terms");
#endif

    QFile file(":/terms.htm");
    file.open(QIODevice::ReadOnly);
    return QString::fromUtf8(file.readAll());
}

bool Duvido::hasGallery() const {
#ifdef Q_OS_ANDROID
    return _activity.hasGallery();
#else
    return false;
#endif
}

void Duvido::fetchPhotoFromGallery() {
#ifdef Q_OS_ANDROID
    _activity.fetchPhotoFromGallery();
#endif
}

QList<PostingChallenge*> Duvido::postingChallenges() const {
    return _postingChallenges;
}

void Duvido::addPostingChallenge(PostingChallenge* postingChallenge) {
    if (postingChallenge->isFinished()) {
        postingChallenge->deleteLater();
        return;
    }

    postingChallenge->setParent(this);
    _postingChallenges.append(postingChallenge);
    emit postingChallengeAdded(postingChallenge);

    connect(postingChallenge, &PostingChallenge::finished, [this, postingChallenge]{
        _postingChallenges.removeOne(postingChallenge);
        emit postingChallengeRemoved(postingChallenge);
    });
}
