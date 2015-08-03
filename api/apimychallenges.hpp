#pragma once

#include <api/api.hpp>
#include <data/mychallenge.hpp>

class ApiMyChallenges : public Api {
    Q_OBJECT

public:

    explicit ApiMyChallenges(QObject* parent = nullptr);

    const QList<MyChallenge>& challenges() const { return _challenges; }

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QList<MyChallenge> _challenges;

};
