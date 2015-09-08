#pragma once

#include <data/user.hpp>
#include <QObject>

struct Target : User {
    Q_GADGET
    Q_PROPERTY(QString status MEMBER status CONSTANT)
    Q_PROPERTY(QString lastSubmissionId MEMBER lastSubmissionId CONSTANT)
    Q_PROPERTY(QString imageId MEMBER imageId CONSTANT)
    Q_PROPERTY(double imageRatio MEMBER imageRatio CONSTANT)
public:

    QJsonObject toJson() const;
    Target& fromJson(const QJsonObject& obj);
    bool operator==(const Target& other);

    QString status;
    QString lastSubmissionId;
    QString imageId;
    double imageRatio;
};
