#include "me.hpp"

QJsonObject Me::toJson() const {
    QJsonObject obj = User::toJson();
    obj["firstName"] = firstName;
    obj["lastName"] = lastName;
    obj["birthday"] = birthday.toString("MM/dd/yyyy");
    obj["gender"] = gender;
    obj["email"] = email;
    return obj;
}

Me& Me::fromJson(const QJsonObject& obj) {
    User::fromJson(obj);
    firstName = obj["firstName"].toString();
    lastName = obj["lastName"].toString();
    birthday = QDate::fromString(obj["birthday"].toString(), "MM/dd/yyyy");
    gender = obj["gender"].toString();
    email = obj["email"].toString();
    return *this;
}

bool Me::operator==(const Me& other) {
    return User::operator==(other) &&
            firstName == other.firstName && lastName == other.lastName &&
            birthday == other.birthday && gender == other.gender && email == other.email;
}
