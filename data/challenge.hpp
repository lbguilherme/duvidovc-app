#pragma once

#include <data/prechallenge.hpp>
#include <data/user.hpp>
#include <QDateTime>

struct Challenge : PreChallenge {
    QJsonObject toJson() const;
    Challenge& fromJson(const QJsonObject& obj);
    bool operator==(const Challenge& other);

    QString id;
    QDateTime creationTime;
    User owner;
    double ratio;
};
