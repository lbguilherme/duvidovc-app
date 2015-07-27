#include <data/submission.hpp>

QJsonObject Submission::toJson() const {
    QJsonObject obj;
    obj["status"] = status;
    obj["text"] = text;
    obj["imageId"] = imageId;
    obj["sentTime"] = sentTime.toString(Qt::ISODate);
    obj["judgedTime"] = judgedTime.toString(Qt::ISODate);
    return obj;
}

Submission& Submission::fromJson(const QJsonObject& obj) {
    status = obj["status"].toString();
    text = obj["text"].toString();
    imageId = obj["imageId"].toString();
    sentTime = QDateTime::fromString(obj["sentTime"].toString(), Qt::ISODate);
    judgedTime = QDateTime::fromString(obj["judgedTime"].toString(), Qt::ISODate);
    return *this;
}

bool Submission::operator==(const Submission& other) {
    return status == other.status && text == other.text && imageId == other.imageId &&
            sentTime == other.sentTime && judgedTime == other.judgedTime;
}
