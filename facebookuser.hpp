#pragma once

#include <QObject>

class FacebookUser : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString id READ id NOTIFY idChanged)

    friend class Facebook;

    FacebookUser();

    void setDummy();
    void loadData(QJsonDocument userData);

public:

    QString id();
    bool isDummy();

signals:

    void idChanged();

private:

    QString _id;

};
