#include <data/target.hpp>
#include <data/list.hpp>

QJsonObject Target::toJson() const {
    QJsonObject obj = User::toJson();
    obj["status"] = status;
    obj["lastSubmissionId"] = lastSubmissionId;
    obj["imageId"] = imageId;
    obj["imageRatio"] = imageRatio;
    return obj;
}

Target& Target::fromJson(const QJsonObject& obj) {
    User::fromJson(obj);
    status = obj["status"].toString();
    lastSubmissionId = obj["lastSubmissionId"].toString();
    imageId = obj["imageId"].toString();
    imageRatio = obj["imageRatio"].toDouble();
    return *this;
}

bool Target::operator==(const Target& other) {
    return User::operator==(other) && status == other.status && lastSubmissionId == other.lastSubmissionId &&
            imageId == other.imageId && imageRatio == other.imageRatio;
}
