#include "avatarloader.hpp"
#include "duvido.hpp"

#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDir>
#include <QQuickItem>
#include <QTimer>
#include <QList>
#include <QMap>
#include <functional>

extern Duvido* duvido;

namespace {
    const qint64 cacheDurationMSecs{24 * 60 * 60 * 1000}; // one day
    const int maxAvatarsPerRequest{100};

    typedef std::function<void()> Callback;
    QMap<QString, QList<Callback>> pendingUsers;

    QString retrieveAvatarImageFilePath(const QString& userId) {
        return QDir::temp().filePath("duvido_avatar_" + userId + ".jpg");
    }

    QString retrieveAvatarDateFilePath(const QString& userId) {
        return QDir::temp().filePath("duvido_avatar_" + userId + ".utc");
    }

    bool isAvatarUpToDate(const QString& userId) {
        QFile dateFile(retrieveAvatarDateFilePath(userId));
        if (dateFile.exists()) {
            dateFile.open(QIODevice::ReadOnly);
            const qint64 currentMSecs = QDateTime::currentDateTimeUtc().currentMSecsSinceEpoch();
            const qint64 cacheMSecs = dateFile.readAll().toLongLong();
            dateFile.close();

            return (currentMSecs - cacheMSecs) <= cacheDurationMSecs;
        } else {
            return false;
        }
    }

    void requestAvatar(const QString& userId, const Callback& callback) {
        if (QFile::exists(retrieveAvatarImageFilePath(userId)) && isAvatarUpToDate(userId)) {
            callback();
        } else {
            pendingUsers[userId].push_back(callback);
        }
    }

    void saveAvatar(const QString& userId, QNetworkReply* const reply) {
        char b0, b1, b2, b3;
        reply->getChar(&b0);
        reply->getChar(&b1);
        reply->getChar(&b2);
        reply->getChar(&b3);
        const uint32_t size = (static_cast<uint8_t>(b0) << 24) | (static_cast<uint8_t>(b1) << 16) | (static_cast<uint8_t>(b2) << 8) | static_cast<uint8_t>(b3);

        QFile imageFile(retrieveAvatarImageFilePath(userId));
        imageFile.open(QIODevice::WriteOnly);
        imageFile.write(reply->read(size));
        imageFile.close();

        QFile dateFile(retrieveAvatarDateFilePath(userId));
        dateFile.open(QIODevice::WriteOnly);
        dateFile.write(QString::number(QDateTime::currentMSecsSinceEpoch()).toUtf8());
        dateFile.close();
    }

    QTimer* createTimer() {
        QTimer* timer = new QTimer(duvido);
        QObject::connect(timer, &QTimer::timeout, [timer] () {
            if (pendingUsers.empty()) return;

            QMap<QString, QList<Callback>> requestedUsers;
            int remainingUsers = maxAvatarsPerRequest;
            for (auto it = pendingUsers.begin(), end = pendingUsers.end(); remainingUsers > 0 && it != end; --remainingUsers, ++it) {
                requestedUsers[it.key()] = it.value();
            }

            QList<QString> requestedIds;
            for (auto it = requestedUsers.begin(), end = requestedUsers.end(); it != end; ++it) {
                pendingUsers.remove(it.key());
                requestedIds.push_back(it.key());
            }

            QNetworkRequest request(duvido->api()->avatarsUrl(requestedIds));
            QNetworkReply* reply = duvido->http().get(request);
            QObject::connect(reply, &QNetworkReply::finished, [timer, reply, requestedUsers] {
                reply->deleteLater();
                const int status = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
                if (status == 200) {
                    timer->setInterval(100);
                    for (auto it = requestedUsers.begin(), end = requestedUsers.end(); it != end; ++it) {
                        saveAvatar(it.key(), reply);
                        for (const Callback& callback : it.value())
                            callback();
                    }
                } else {
                    timer->setInterval(std::max(30000, static_cast<int>(timer->interval() * 1.2f + 300)));
                    for (auto it = requestedUsers.begin(), end = requestedUsers.end(); it != end; ++it)
                        for (const Callback& callback : it.value())
                            pendingUsers[it.key()].push_back(callback);
                }
            });
        });
        timer->setSingleShot(false);
        timer->start(100);
        return timer;
    }
}

QTimer* AvatarLoader::sTimer = nullptr;
AvatarLoader::AvatarLoader(QObject* parent) : QObject(parent), _target(nullptr) {
    if (sTimer == nullptr)
        sTimer = createTimer();
}

QString AvatarLoader::userId() const {
    return _userId;
}

void AvatarLoader::setUserId(const QString& userId) {
    _userId = userId;

    clearTargetSource();
    requestAvatar(_userId, [this] () {
        refreshTargetSource();
    });
}

QQuickItem* AvatarLoader::target() const {
    return _target;
}

void AvatarLoader::setTarget(QQuickItem* target) {
    _target = target;
    refreshTargetSource();
}

void AvatarLoader::clearTargetSource() {
    if (_target != nullptr) {
        _target->setProperty("source", "");
    }
}

void AvatarLoader::refreshTargetSource() {
    if (_target != nullptr) {
        const QString imageFilePath = retrieveAvatarImageFilePath(_userId);
        _target->setProperty("source", QFile::exists(imageFilePath) ? "file:///" + imageFilePath : "");
    }
}
