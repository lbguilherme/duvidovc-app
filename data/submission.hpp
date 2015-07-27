#pragma once

#include <QJsonObject>
#include <QDateTime>

struct Submission {
    QJsonObject toJson() const;
    Submission& fromJson(const QJsonObject& obj);
    bool operator==(const Submission& other);

    QString status;
    QString text;
    QString imageId;
    QDateTime sentTime;
    QDateTime judgedTime;
};
