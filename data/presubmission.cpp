#include <data/submission.hpp>

QJsonObject PreSubmission::toJson() const {
    QJsonObject obj;
    obj["challenge"] = challenge;
    obj["text"] = text;
    obj["imageId"] = imageId;
    return obj;
}

PreSubmission& PreSubmission::fromJson(const QJsonObject& obj) {
    challenge = obj["challenge"].toString();
    text = obj["text"].toString();
    imageId = obj["imageId"].toString();
    return *this;
}

bool PreSubmission::operator==(const PreSubmission& other) {
    return challenge == other.challenge && text == other.text && imageId == other.imageId;
}
