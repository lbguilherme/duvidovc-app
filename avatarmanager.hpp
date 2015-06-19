#pragma once

#include <QObject>
#include <QTimer>
#include <QSet>
#include <QUrl>

class AvatarManager : public QObject {
    Q_OBJECT

public:

    AvatarManager(QObject* parent = nullptr);

    void fetchAvatar(QString id);

signals:

    void avatarFetched(QString id, QUrl url);

private:

    QSet<QString> _waitingIds;
    QTimer _timer;

};
