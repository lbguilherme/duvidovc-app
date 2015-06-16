#pragma once

#include <QObject>

class QTimer;
class QQuickItem;

class AvatarLoader : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString userId READ userId WRITE setUserId)
    Q_PROPERTY(QQuickItem* target READ target WRITE setTarget)

public:

    AvatarLoader(QObject* parent = nullptr);

    QString userId() const;
    void setUserId(const QString& userId);

    QQuickItem* target() const;
    void setTarget(QQuickItem* target);

private:

    void clearTargetSource();
    void refreshTargetSource();

    QString _userId;
    QQuickItem* _target;

    static QTimer* sTimer;
};
