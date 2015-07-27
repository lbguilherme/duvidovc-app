#pragma once

#include <data/challenge.hpp>
#include <data/target.hpp>
#include <QObject>

struct MyChallenge : Challenge {
    Q_GADGET
    Q_PROPERTY(QList<Target> targets MEMBER targets CONSTANT)
public:

    QJsonObject toJson() const;
    MyChallenge& fromJson(const QJsonObject& obj);
    bool operator==(const MyChallenge& other);

    QList<Target> targets;
};
