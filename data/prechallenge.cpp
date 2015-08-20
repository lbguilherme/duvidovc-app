#include <data/prechallenge.hpp>

QJsonObject PreChallenge::toJson() const {
    QJsonObject obj;
    obj["title"] = title;
    obj["details"] = details;
    obj["reward"] = reward;
    obj["duration"] = (double)duration;
    obj["imageId"] = imageId;
    obj["targetIds"] = targetIds.join(",");
    return obj;
}

PreChallenge& PreChallenge::fromJson(const QJsonObject& obj) {
    title = obj["title"].toString();
    details = obj["details"].toString();
    reward = obj["reward"].toString();
    duration = obj["duration"].toDouble();
    imageId = obj["imageId"].toString();
    targetIds = obj["targetIds"].toString().split(",");
    return *this;
}

bool PreChallenge::operator==(const PreChallenge& other) {
    return title == other.title && details == other.details &&
            reward == other.reward && duration == other.duration &&
            imageId == other.imageId && targetIds == other.targetIds;
}
