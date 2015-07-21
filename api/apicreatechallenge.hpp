#pragma once

#include <api/api.hpp>
#include <data/prechallenge.hpp>

class ApiCreateChallenge : public Api {
    Q_OBJECT

public:

    explicit ApiCreateChallenge(PreChallenge info, QObject* parent = nullptr);

protected:

    void sendRequest() override;
    void processReply() override;

private:

    PreChallenge _info;

};
