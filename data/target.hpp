#pragma once

#include <data/user.hpp>
#include <data/submission.hpp>
#include <QDateTime>
#include <QObject>

struct Target : User {
    Q_GADGET
    Q_PROPERTY(QString status MEMBER status CONSTANT)
    Q_PROPERTY(QList<Submission> submissions MEMBER submissions CONSTANT)
public:

    QJsonObject toJson() const;
    Target& fromJson(const QJsonObject& obj);
    bool operator==(const Target& other);

    QString status;
    QList<Submission> submissions;
};
