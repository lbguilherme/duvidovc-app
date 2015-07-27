#pragma once

#include <QJsonObject>
#include <QDateTime>
#include <QObject>

struct Submission {
    Q_GADGET
    Q_PROPERTY(QString status MEMBER status CONSTANT)
    Q_PROPERTY(QString text MEMBER text CONSTANT)
    Q_PROPERTY(QString imageId MEMBER imageId CONSTANT)
    Q_PROPERTY(QDateTime sentTime MEMBER sentTime CONSTANT)
    Q_PROPERTY(QDateTime judgedTime MEMBER judgedTime CONSTANT)
public:

    QJsonObject toJson() const;
    Submission& fromJson(const QJsonObject& obj);
    bool operator==(const Submission& other);

    QString status;
    QString text;
    QString imageId;
    QDateTime sentTime;
    QDateTime judgedTime;
};
