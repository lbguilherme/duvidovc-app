#include <core/duvido.hpp>
#include <core/duvidoeventfilter.hpp>
#include <qml/avatarloader.hpp>
#include <qml/friendsmodel.hpp>
#include <qml/mychallengesmodel.hpp>
#include <qml/feedmodel.hpp>
#include <qml/challengecreator.hpp>
#include <qml/submissionsender.hpp>
#include <api/apilogin.hpp>
#include <api/apisendgcmtoken.hpp>
#include <api/apirefuse.hpp>
#include <core/avatarmanager.hpp>
#include <core/postingchallenge.hpp>
#include <core/postingsubmission.hpp>

#include <QSortFilterProxyModel>
#include <QQmlContext>
#include <QQmlEngine>
#include <QScreen>
#include <QSettings>
#include <QtQml>

#include <functional>

#ifdef Q_OS_ANDROID
#include <vc.duvido.FacebookBridge.hpp>
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
    startPostingChallengesFromQueue();
    startPostingSubmissionsFromQueue();
}

void Duvido::initInterfaces() {
    qRegisterMetaType<FriendsModel*>("FriendsModel");
    qRegisterMetaType<MyChallengesModel*>("MyChallengesModel");
    qRegisterMetaType<FeedModel*>("FeedModel");
    qRegisterMetaType<QSortFilterProxyModel*>("QSortFilterProxyModel");

    qmlRegisterType<AvatarLoader>("Duvido", 1, 0, "AvatarLoader");
    qmlRegisterType<ChallengeCreator>("Duvido", 1, 0, "ChallengeCreator");
    qmlRegisterType<SubmissionSender>("Duvido", 1, 0, "SubmissionSender");
    qmlRegisterType<FriendsModel>("Duvido", 1, 0, "FriendsModel");
    qmlRegisterType<MyChallengesModel>("Duvido", 1, 0, "MyChallengesModel");
    qmlRegisterType<FeedModel>("Duvido", 1, 0, "FeedModel");

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
    root->setContextProperty("apiUrl", Api::url);
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
            setMe(result->me());
        connect(result, &Api::finished, [this, result]{
            result->deleteLater();
            if (result->changedFromCache())
                setMe(result->me());
        });
    }
}

void Duvido::setGcmToken(QString token) {
    _gcmToken = token;
    if (!_me.id.isEmpty())
        sendGcmToken();
}

void Duvido::sendGcmToken() {
    Q_ASSERT(!_gcmToken.isEmpty());
    Q_ASSERT(!_me.id.isEmpty());
    auto sender = new ApiSendGcmToken(_gcmToken, this);
    connect(sender, &Api::finished, [sender]{
        sender->deleteLater();
    });
}

AvatarManager* Duvido::avatarManager() {
    return _avatarManager;
}

void Duvido::login() {
    if (!_token.isEmpty()) return;

#ifdef Q_OS_ANDROID
    FacebookBridge::login();
#else
    setToken("CAAVRjWiYAOkBAP6ICuuOz1aPZBisNDSYvEB13y6oQfZCF1gFXIW2bjcNdpw66M4uLKB0wJC1Pba4nejnFZCe6hrEu4UiPgsuk8CKYcfVSrlV2YGVWZCINQxZCatSCMZCrju9kDaZCBAWkFoYfHt5I4vmvQdQdeRaqSrqZBnk1JdMeh7jETqpuf5U7oVopjvTvVhKeUIEvRRzlXsrl2960MVIFPOVhLyHM10M7mAbylcdEQZDZD");
    //setToken("CAAVRjWiYAOkBAJ0TLspCVnr8fWT7i0yeEf7ozWkpYiZARPdyxqqPEaHzMdbFoRfZCDm12HpZCknIuPH8nHtjHGfHYxiR5X85GtkTxKhdELs768DNKM7klVSHsDFg559nfRxt11rIQg1rWsX09HU0KU6zs8bOqlPSqxIY4LfFNM1uVhxyPwgvYE3TtA8BytBokB3ud26KdmljpzGtJscHNQYbdyy5ZChZB7RyHFDrKZAdqimaIubJsE");
#endif
}

void Duvido::logout() {
    setToken("");
}

QString Duvido::myId() const {
    return _me.id;
}

QString Duvido::myName() const {
    return _me.name;
}

void Duvido::unsetMe() {
    setToken("");
    if (_me.id == "") return;
    _me = Me();
    emit meChanged();
}

void Duvido::setMe(const Me& me) {
    if (_me == me) return;
    _me = me;
    emit meChanged();
#ifdef Q_OS_ANDROID
    if (!_gcmToken.isEmpty())
        sendGcmToken();
    else if (_activity.hasGooglePlayServices())
        _activity.requestGcmToken();
#endif
}

QString Duvido::terms() const {
    QFile file(":/terms.htm");
    file.open(QIODevice::ReadOnly);
    return QString::fromUtf8(file.readAll());
}

QString Duvido::version() const {
    return "0.0.2";
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
    updatePostingChallengeQueue();
    emit postingChallengeAdded(postingChallenge);

    connect(postingChallenge, &PostingChallenge::finished, [this, postingChallenge]{
        _postingChallenges.removeOne(postingChallenge);
        updatePostingChallengeQueue();
        emit postingChallengeRemoved(postingChallenge);
    });
}

void Duvido::updatePostingChallengeQueue() {
    QString queuePath = QDir::home().filePath("duvido_postingchallenge_queue");
    QFile queueFile(queuePath);
    queueFile.open(QIODevice::WriteOnly);

    QJsonArray arr;
    for (auto postingChallenge : _postingChallenges) {
        arr.append(postingChallenge->toJson());
    }

    queueFile.write(QJsonDocument(arr).toJson());
}

void Duvido::startPostingChallengesFromQueue() {
    Q_ASSERT(_postingChallenges.isEmpty());

    QString queuePath = QDir::home().filePath("duvido_postingchallenge_queue");
    QFile queueFile(queuePath);
    if (!queueFile.exists()) return;
    queueFile.open(QIODevice::ReadOnly);

    QJsonArray arr = QJsonDocument::fromJson(queueFile.readAll()).array();
    for (auto value : arr) {
        auto postingChallenge = PostingChallenge::fromJson(value.toObject());
        _postingChallenges.append(postingChallenge);
        emit postingChallengeAdded(postingChallenge);

        connect(postingChallenge, &PostingChallenge::finished, [this, postingChallenge]{
            _postingChallenges.removeOne(postingChallenge);
            updatePostingChallengeQueue();
            emit postingChallengeRemoved(postingChallenge);
        });
    }
}

QList<PostingSubmission*> Duvido::postingSubmissions() const {
    return _postingSubmissions;
}

void Duvido::addPostingSubmission(PostingSubmission* postingSubmission) {
    if (postingSubmission->isFinished()) {
        postingSubmission->deleteLater();
        return;
    }

    postingSubmission->setParent(this);
    _postingSubmissions.append(postingSubmission);
    updatePostingSubmissionQueue();

    connect(postingSubmission, &PostingSubmission::finished, [this, postingSubmission]{
        _postingSubmissions.removeOne(postingSubmission);
        updatePostingSubmissionQueue();
    });
}

void Duvido::updatePostingSubmissionQueue() {
    QString queuePath = QDir::home().filePath("duvido_postingsubmission_queue");
    QFile queueFile(queuePath);
    queueFile.open(QIODevice::WriteOnly);

    QJsonArray arr;
    for (auto postingSubmission : _postingSubmissions) {
        arr.append(postingSubmission->toJson());
    }

    queueFile.write(QJsonDocument(arr).toJson());
}

void Duvido::startPostingSubmissionsFromQueue() {
    Q_ASSERT(_postingSubmissions.isEmpty());

    QString queuePath = QDir::home().filePath("duvido_postingsubmission_queue");
    QFile queueFile(queuePath);
    if (!queueFile.exists()) return;
    queueFile.open(QIODevice::ReadOnly);

    QJsonArray arr = QJsonDocument::fromJson(queueFile.readAll()).array();
    for (auto value : arr) {
        auto postingSubmission = PostingSubmission::fromJson(value.toObject());
        _postingSubmissions.append(postingSubmission);

        connect(postingSubmission, &PostingSubmission::finished, [this, postingSubmission]{
            _postingSubmissions.removeOne(postingSubmission);
            updatePostingChallengeQueue();
        });
    }
}

void Duvido::refuseChallenge(QString id) {
    emit challengeRefused(id);
    auto api = new ApiRefuse(id, this);
    connect(api, &Api::finished, [api]{
        api->deleteLater();
    });
}
