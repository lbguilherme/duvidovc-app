#pragma once

#include <QJsonObject>
#include <QStringList>

struct PreChallenge {
    QJsonObject toJson() const;
    PreChallenge& fromJson(const QJsonObject& obj);
    bool operator==(const PreChallenge& other);

    QString title;
    QString description;
    QString reward;
    unsigned duration = 0;
    QString image;
    QStringList targetIds;
};
