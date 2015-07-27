#pragma once

#include <data/user.hpp>
#include <data/submission.hpp>
#include <QDateTime>

struct Target : User {
    QJsonObject toJson() const;
    Target& fromJson(const QJsonObject& obj);
    bool operator==(const Target& other);

    QString status;
    QList<Submission> submissions;
};
