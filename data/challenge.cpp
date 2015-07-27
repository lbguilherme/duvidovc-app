#include <data/challenge.hpp>

QJsonObject Challenge::toJson() const {
    QJsonObject obj = PreChallenge::toJson();
    obj["id"] = id;
    obj["creationTime"] = creationTime.toString(Qt::ISODate);
    obj["owner"] = owner.toJson();
    obj["ratio"] = ratio;
    return obj;
}

Challenge& Challenge::fromJson(const QJsonObject& obj) {
    PreChallenge::fromJson(obj);
    id = obj["id"].toString();
    creationTime = QDateTime::fromString(obj["creationTime"].toString(), Qt::ISODate);
    owner.fromJson(obj["owner"].toObject());
    ratio = obj["ratio"].toDouble();
    return *this;
}

bool Challenge::operator==(const Challenge& other) {
    return PreChallenge::operator==(other) &&
            id == other.id && creationTime == other.creationTime &&
            owner == other.owner && ratio == other.ratio;
}
