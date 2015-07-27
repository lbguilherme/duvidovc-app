#pragma once

#include <data/user.hpp>
#include <QObject>
#include <QDate>

struct Me : User {
    Q_GADGET
public:

    QJsonObject toJson() const;
    Me& fromJson(const QJsonObject& obj);
    bool operator==(const Me& other);
};
