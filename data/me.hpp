#pragma once

#include <data/user.hpp>
#include <QDate>

struct Me : User {
    QJsonObject toJson() const;
    Me& fromJson(const QJsonObject& obj);
    bool operator==(const Me& other);
};
