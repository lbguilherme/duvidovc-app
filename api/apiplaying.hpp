#pragma once

#include <api/api.hpp>
#include <data/submission.hpp>

class ApiPlaying : public Api {
    Q_OBJECT

public:

    explicit ApiPlaying(QObject* parent = nullptr);

    const QList<Submission>& submissions() const { return _submissions; }

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QList<Submission> _submissions;

};
