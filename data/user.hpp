#pragma once

#include <QJsonObject>
#include <QObject>

struct User {
    Q_GADGET
    Q_PROPERTY(QString id MEMBER id CONSTANT)
    Q_PROPERTY(QString name MEMBER name CONSTANT)
public:

    QJsonObject toJson() const;
    User& fromJson(const QJsonObject& obj);
    bool operator==(const User& other);

    QString id;
    QString name;
};
