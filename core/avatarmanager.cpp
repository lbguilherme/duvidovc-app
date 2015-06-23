#include <core/avatarmanager.hpp>
#include <api/apiavatars.hpp>

#include <QFile>
#include <QDir>
#include <QDateTime>

static const qint64 cacheDuration = 24 * 60 * 60 * 1000; // one day

static QString avatarTmpPath(QString id) {
    return QDir::temp().filePath("duvido_avatar_" + id + ".jpg");
}

AvatarManager::AvatarManager(QObject* parent) : QObject(parent) {
    _timer.setInterval(100);
    _timer.setSingleShot(true);
    connect(&_timer, &QTimer::timeout, [this]{
        auto result = new ApiAvatars(_waitingIds.toList(), this);
        _waitingIds.clear();
        connect(result, &Api::finished, [this, result]{
            result->deleteLater();
            auto avatars = result->avatars();
            for (QString id : avatars.keys()) {
                QString path = avatarTmpPath(id);
                QFile file(path);
                file.open(QIODevice::WriteOnly);
                file.write(avatars[id]);
                file.close();
                emit avatarFetched(id, QUrl("file://" + path));
            }
        });
    });
}

void AvatarManager::fetchAvatar(QString id) {
    QString path = avatarTmpPath(id);
    QFileInfo info(path);
    if (info.exists()) {
        const qint64 current = QDateTime::currentDateTimeUtc().toMSecsSinceEpoch();
        const qint64 cache = info.lastModified().toUTC().toMSecsSinceEpoch();

        if ((current - cache) <= cacheDuration) {
            emit avatarFetched(id, QUrl("file://" + path));
            return;
        }
    }

    _waitingIds.insert(id);
    if (!_timer.isActive())
        _timer.start();
}
