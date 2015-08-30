#pragma once

#include <api/api.hpp>
#include <data/presubmission.hpp>

class ApiSendSubmission : public Api {
    Q_OBJECT

public:

    explicit ApiSendSubmission(PreSubmission info, QObject* parent = nullptr);

protected:

    void sendRequest() override;
    void processReply() override;

private:

    PreSubmission _info;

};
