#include <data/me.hpp>

QJsonObject Me::toJson() const {
    QJsonObject obj = User::toJson();
    return obj;
}

Me& Me::fromJson(const QJsonObject& obj) {
    User::fromJson(obj);
    return *this;
}

bool Me::operator==(const Me& other) {
    return User::operator==(other);
}
