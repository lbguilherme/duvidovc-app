#include <data/submission.hpp>

QJsonObject Submission::toJson() const {
    QJsonObject obj = PreSubmission::toJson();
    obj["id"] = id;
    obj["status"] = status;
    obj["sentTime"] = QString::number(sentTime.toMSecsSinceEpoch());
    obj["judgedTime"] = judgedTime.isNull() ? "" : QString::number(judgedTime.toMSecsSinceEpoch());
    obj["creationTime"] = QString::number(creationTime.toMSecsSinceEpoch());
    obj["challengeOwner"] = challengeOwner.toJson();
    obj["title"] = title;
    obj["details"] = details;
    obj["reward"] = reward;
    obj["duration"] = (double)duration;
    obj["ratio"] = ratio;
    return obj;
}

Submission& Submission::fromJson(const QJsonObject& obj) {
    PreSubmission::fromJson(obj);
    id = obj["id"].toString();
    status = obj["status"].toString();
    sentTime = QDateTime::fromMSecsSinceEpoch(obj["sentTime"].toString().toLongLong());
    judgedTime = obj["judgedTime"].toString() == "" ? QDateTime() : QDateTime::fromMSecsSinceEpoch(obj["judgedTime"].toString().toLongLong());
    title = obj["title"].toString();
    details = obj["details"].toString();
    reward = obj["reward"].toString();
    duration = obj["duration"].toDouble();
    creationTime = QDateTime::fromMSecsSinceEpoch(obj["creationTime"].toString().toLongLong());
    challengeOwner.fromJson(obj["challengeOwner"].toObject());
    ratio = obj["ratio"].toDouble();
    return *this;
}

bool Submission::operator==(const Submission& other) {
    return PreSubmission::operator==(other) && id == other.id && title == other.title &&
            details == other.details && reward == other.reward && duration == other.duration &&
            status == other.status && sentTime == other.sentTime && judgedTime == other.judgedTime &&
            creationTime == other.creationTime && challengeOwner == other.challengeOwner &&
            ratio == other.ratio;
}

int Submission::timeLeft() const {
    return duration - (QDateTime::currentMSecsSinceEpoch() - creationTime.toMSecsSinceEpoch())/1000;
}
