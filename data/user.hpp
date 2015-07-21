#pragma once

#include <QJsonObject>

struct User {
    QJsonObject toJson() const;
    User& fromJson(const QJsonObject& obj);
    bool operator==(const User& other);

    QString id;
    QString name;
};
