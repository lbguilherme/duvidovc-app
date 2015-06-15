#pragma once

#include <QObject>
#include <QQuickItem>
#include <QNetworkAccessManager>

class AvatarLoader : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString userId READ userId WRITE setUserId)
    Q_PROPERTY(QQuickItem* target READ target WRITE setTarget)

public:

    AvatarLoader(QObject* parent = 0);

    QString userId() const;
    void setUserId(const QString& userId);

    QQuickItem* target() const;
    void setTarget(QQuickItem* target);

private:

    void fetch();
    void setTargetSource();
    QString cacheFilePath();

    QString _userId;
    QQuickItem* _target = nullptr;

};
