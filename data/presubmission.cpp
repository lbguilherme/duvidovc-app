#include <data/submission.hpp>

QJsonObject PreSubmission::toJson() const {
    QJsonObject obj;
    obj["text"] = text;
    obj["imageId"] = imageId;
    return obj;
}

PreSubmission& PreSubmission::fromJson(const QJsonObject& obj) {
    text = obj["text"].toString();
    imageId = obj["imageId"].toString();
    return *this;
}

bool PreSubmission::operator==(const PreSubmission& other) {
    return text == other.text && imageId == other.imageId;
}
