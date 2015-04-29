#pragma once

#include <QObject>

class FacebookUser : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString id READ id CONSTANT)

    friend class Facebook;

    FacebookUser();
    FacebookUser(QJsonDocument userData);

public:

    QString id() const;
    bool isDummy() const;

private:

    QString _id;

};
