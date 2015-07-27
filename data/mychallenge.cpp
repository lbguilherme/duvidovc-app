#include <data/mychallenge.hpp>
#include <data/list.hpp>

QJsonObject MyChallenge::toJson() const {
    QJsonObject obj = Challenge::toJson();
    obj["targets"] = ::toJson(targets);
    return obj;
}

MyChallenge& MyChallenge::fromJson(const QJsonObject& obj) {
    Challenge::fromJson(obj);
    targets = ::fromJson<Target>(obj["targets"].toArray());
    return *this;
}

bool MyChallenge::operator==(const MyChallenge& other) {
    return Challenge::operator==(other) && targets == other.targets;
}
