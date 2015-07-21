#include "user.hpp"

QJsonObject User::toJson() const {
    QJsonObject obj;
    obj["id"] = id;
    obj["name"] = name;
    return obj;
}

User& User::fromJson(const QJsonObject& obj) {
    id = obj["id"].toString();
    name = obj["name"].toString();
    return *this;
}

bool User::operator==(const User& other) {
    return id == other.id && name == other.name;
}
