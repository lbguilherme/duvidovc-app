#include <api/apifeed.hpp>
#include <core/duvido.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QNetworkReply>

ApiFeed::ApiFeed(QObject* parent) : Api(parent) {
    sendRequest();
}

void ApiFeed::sendRequest() {
    _reply = duvido->http().get(request("/feed", QVariantMap{{"token", duvido->token()}}));
    setupReply();
}

void ApiFeed::processReply() {
    QJsonArray array = QJsonDocument::fromJson(_reply->readAll()).array();
    for (QJsonValue el : array) {
        QJsonObject obj = el.toObject();
        Info info;
        info.id = obj["id"].toString();
        info.owner = obj["owner"].toString();
        info.ownerName = obj["ownerName"].toString();
        info.title = obj["title"].toString();
        info.description = obj["description"].toString();
        info.reward = obj["reward"].toString();
        info.duration = obj["duration"].toInt();
        info.image = obj["image"].toString();
        _challenges.append(info);
    }
}

const ApiFeed::Info& ApiFeed::operator[](int index) const {
    return _challenges[index];
}

int ApiFeed::count() const {
    return _challenges.size();
}
