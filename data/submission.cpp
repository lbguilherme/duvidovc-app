#include <data/submission.hpp>

QJsonObject Submission::toJson() const {
    QJsonObject obj = PreSubmission::toJson();
    obj["status"] = status;
    obj["sentTime"] = QString::number(sentTime.toMSecsSinceEpoch());
    obj["judgedTime"] = QString::number(judgedTime.toMSecsSinceEpoch());
    return obj;
}

Submission& Submission::fromJson(const QJsonObject& obj) {
    PreSubmission::fromJson(obj);
    status = obj["status"].toString();
    sentTime = QDateTime::fromMSecsSinceEpoch(obj["sentTime"].toString().toLongLong());
    judgedTime = QDateTime::fromMSecsSinceEpoch(obj["judgedTime"].toString().toLongLong());
    return *this;
}

bool Submission::operator==(const Submission& other) {
    return PreSubmission::operator==(other) && status == other.status &&
            sentTime == other.sentTime && judgedTime == other.judgedTime;
}
