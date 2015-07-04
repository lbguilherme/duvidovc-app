#pragma once

#include <api/api.hpp>

#include <QDateTime>

class ApiMyChallenges : public Api {
    Q_OBJECT

public:

    struct SubmissionInfo {
        QString status;
        QString text;
        QString image;
        QDateTime sentTime;
        QDateTime judgedTime;
    };

    struct TargetInfo {
        QString id;
        QString name;
        QString status;
        QList<SubmissionInfo> submissions;
    };

    struct Info {
        QString id;
        QString title;
        QString description;
        QString reward;
        unsigned duration;
        QString image;
        QList<TargetInfo> targets;
    };

    explicit ApiMyChallenges(QObject* parent = nullptr);

    const Info& operator[](int index) const;
    int count() const;

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QList<Info> _challenges;

};
