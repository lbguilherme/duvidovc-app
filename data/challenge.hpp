#pragma once

#include <data/prechallenge.hpp>
#include <data/user.hpp>
#include <QDateTime>
#include <QObject>

struct Challenge : PreChallenge {
    Q_GADGET
    Q_PROPERTY(QString id MEMBER id CONSTANT)
    Q_PROPERTY(QDateTime creationTime MEMBER creationTime CONSTANT)
    Q_PROPERTY(User owner MEMBER owner CONSTANT)
    Q_PROPERTY(double ratio MEMBER ratio CONSTANT)
public:

    QJsonObject toJson() const;
    Challenge& fromJson(const QJsonObject& obj);
    bool operator==(const Challenge& other);

    QString id;
    QDateTime creationTime;
    User owner;
    double ratio;
};
