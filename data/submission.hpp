#pragma once

#include <data/presubmission.hpp>
#include <data/user.hpp>
#include <QJsonObject>
#include <QDateTime>
#include <QObject>

struct Submission : PreSubmission {
    Q_GADGET
    Q_PROPERTY(QString id MEMBER id CONSTANT)
    Q_PROPERTY(QString status MEMBER status CONSTANT)
    Q_PROPERTY(QDateTime sentTime MEMBER sentTime CONSTANT)
    Q_PROPERTY(QDateTime judgedTime MEMBER judgedTime CONSTANT)
    Q_PROPERTY(User challengeOwner MEMBER challengeOwner CONSTANT)
    Q_PROPERTY(QDateTime creationTime MEMBER creationTime CONSTANT)
    Q_PROPERTY(QString title MEMBER title CONSTANT)
    Q_PROPERTY(QString details MEMBER details CONSTANT)
    Q_PROPERTY(QString reward MEMBER reward CONSTANT)
    Q_PROPERTY(unsigned duration MEMBER duration CONSTANT)
    Q_PROPERTY(double ratio MEMBER ratio CONSTANT)
public:

    QJsonObject toJson() const;
    Submission& fromJson(const QJsonObject& obj);
    bool operator==(const Submission& other);

    int timeLeft() const;

    QString id;
    QString status;
    User challengeOwner;
    QDateTime creationTime;
    QDateTime sentTime;
    QDateTime judgedTime;
    QString title;
    QString details;
    QString reward;
    unsigned duration = 0;
    double ratio = 0;
};
