#pragma once

#include <data/challenge.hpp>
#include <data/target.hpp>

struct MyChallenge : Challenge {
    QJsonObject toJson() const;
    MyChallenge& fromJson(const QJsonObject& obj);
    bool operator==(const MyChallenge& other);

    QList<Target> targets;
};
