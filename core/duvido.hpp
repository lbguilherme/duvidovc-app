#pragma once

#include <QGuiApplication>
#include <QNetworkAccessManager>
#include <QQuickView>
#include <data/me.hpp>

#ifdef Q_OS_ANDROID
#include <vc.duvido.DuvidoActivity.hpp>
#endif

class AvatarManager;
class PostingChallenge;
class ApiLogin;

class Duvido : public QGuiApplication {
    Q_OBJECT
    Q_PROPERTY(QString myId READ myId NOTIFY meChanged)
    Q_PROPERTY(QString myName READ myName NOTIFY meChanged)
    Q_PROPERTY(QString terms READ terms CONSTANT)
    Q_PROPERTY(bool hasGallery READ hasGallery CONSTANT)
    Q_PROPERTY(QString token READ token NOTIFY tokenChanged)
    Q_PROPERTY(QString version READ version CONSTANT)

public:

    Duvido();

    QNetworkAccessManager& http();
    AvatarManager* avatarManager();

    QString myId() const;
    QString myName() const;
    bool hasGallery() const;
    QString terms() const;
    QString token() const;
    QString version() const;

    QList<PostingChallenge*> postingChallenges() const;
    void addPostingChallenge(PostingChallenge* postingChallenge);

    void unsetMe();
    void setMe(const Me& me);
    Q_INVOKABLE void setToken(QString token);

    Q_INVOKABLE void setGcmToken(QString token);
    void sendGcmToken();

    Q_INVOKABLE void login();
    Q_INVOKABLE void logout();
    Q_INVOKABLE void fetchPhotoFromGallery();

signals:

    void meChanged();
    void backPressed();
    void photoFetched(QString path);
    void tokenChanged();
    void postingChallengeAdded(PostingChallenge* postingChallenge);
    void postingChallengeRemoved(PostingChallenge* postingChallenge);

private:

    void initInterfaces();
    void initFacebook();
    void initView();

    void updatePostingChallengeQueue();
    void startPostingChallengesFromQueue();

private:

    AvatarManager* _avatarManager;

    QString _gcmToken;
    QString _token;
    Me _me;

    QList<PostingChallenge*> _postingChallenges;

    QNetworkAccessManager _http;
    QQuickView _view;

#ifdef Q_OS_ANDROID
    vc::duvido::DuvidoActivity _activity;
#endif

};

extern Duvido* duvido;

Q_DECLARE_METATYPE(Duvido*)
