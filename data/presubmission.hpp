#pragma once

#include <QJsonObject>
#include <QObject>

struct PreSubmission {
    Q_GADGET
    Q_PROPERTY(QString challenge MEMBER challenge CONSTANT)
    Q_PROPERTY(QString text MEMBER text CONSTANT)
    Q_PROPERTY(QString imageId MEMBER imageId CONSTANT)
public:

    QJsonObject toJson() const;
    PreSubmission& fromJson(const QJsonObject& obj);
    bool operator==(const PreSubmission& other);

    QString challenge;
    QString text;
    QString imageId;
};
