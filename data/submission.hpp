#pragma once

#include <data/presubmission.hpp>
#include <QJsonObject>
#include <QDateTime>
#include <QObject>

struct Submission : PreSubmission {
    Q_GADGET
    Q_PROPERTY(QString status MEMBER status CONSTANT)
    Q_PROPERTY(QDateTime sentTime MEMBER sentTime CONSTANT)
    Q_PROPERTY(QDateTime judgedTime MEMBER judgedTime CONSTANT)
public:

    QJsonObject toJson() const;
    Submission& fromJson(const QJsonObject& obj);
    bool operator==(const Submission& other);

    QString status;
    QDateTime sentTime;
    QDateTime judgedTime;
};
