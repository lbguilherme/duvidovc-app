#pragma once

#include <QJsonObject>
#include <QStringList>
#include <QObject>

struct PreChallenge {
    Q_GADGET
    Q_PROPERTY(QString title MEMBER title CONSTANT)
    Q_PROPERTY(QString details MEMBER details CONSTANT)
    Q_PROPERTY(QString reward MEMBER reward CONSTANT)
    Q_PROPERTY(unsigned duration MEMBER duration CONSTANT)
    Q_PROPERTY(QString imageId MEMBER imageId CONSTANT)
    Q_PROPERTY(QStringList targetIds MEMBER targetIds CONSTANT)
public:

    QJsonObject toJson() const;
    PreChallenge& fromJson(const QJsonObject& obj);
    bool operator==(const PreChallenge& other);

    QString title;
    QString details;
    QString reward;
    unsigned duration = 0;
    QString imageId;
    QStringList targetIds;
};
