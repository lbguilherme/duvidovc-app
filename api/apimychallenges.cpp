#include <api/apimychallenges.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiMyChallenges::ApiMyChallenges(QObject* parent) : Api(parent) {
    sendRequest();
}

void ApiMyChallenges::sendRequest() {
    _reply = duvido->http().get(request("/friends", QVariantMap{{"token", duvido->token()}}));
    setupReply();
}

void ApiMyChallenges::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    for (QJsonValue el : array) {
        QJsonObject obj = el.toObject();
        Info info;
        info.id = obj["id"].toString();
        info.title = obj["title"].toString();
        info.description = obj["description"].toString();
        info.reward = obj["reward"].toString();
        info.duration = obj["duration"].toInt();
        info.image = obj["image"].toString();
        for (QJsonValue el : obj["targets"].toArray()) {
            QJsonObject obj = el.toObject();
            TargetInfo tinfo;
            tinfo.id = obj["id"].toString();
            tinfo.name = obj["name"].toString();
            tinfo.status = obj["status"].toString();
            for (QJsonValue el : obj["submissions"].toArray()) {
                QJsonObject obj = el.toObject();
                SubmissionInfo sinfo;
                sinfo.status = obj["status"].toString();
                sinfo.text = obj["text"].toString();
                sinfo.image = obj["image"].toString();
                sinfo.sentTime = QDateTime::fromMSecsSinceEpoch(obj["sentTime"].toString().toULongLong());
                sinfo.judgedTime = QDateTime::fromMSecsSinceEpoch(obj["judgedTime"].toString().toULongLong());
                tinfo.submissions.append(sinfo);
            }
            info.targets.append(tinfo);
        }
        _challenges.append(info);
    }
}

const ApiMyChallenges::Info& ApiMyChallenges::operator[](int index) const {
    return _challenges[index];
}

int ApiMyChallenges::count() const {
    return _challenges.size();
}
