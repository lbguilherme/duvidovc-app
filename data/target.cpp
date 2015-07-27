#include <data/target.hpp>
#include <data/list.hpp>

QJsonObject Target::toJson() const {
    QJsonObject obj = User::toJson();
    obj["status"] = status;
    obj["submissions"] = ::toJson(submissions);
    return obj;
}

Target& Target::fromJson(const QJsonObject& obj) {
    User::fromJson(obj);
    status = obj["status"].toString();
    submissions = ::fromJson<Submission>(obj["submissions"].toArray());
    return *this;
}

bool Target::operator==(const Target& other) {
    return User::operator==(other) && status == other.status && submissions == other.submissions;
}
