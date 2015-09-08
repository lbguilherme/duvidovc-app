#pragma once

#include <api/api.hpp>

class ApiJudge : public Api {
    Q_OBJECT

public:

    explicit ApiJudge(QString id, bool accepted, QObject* parent = nullptr);

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QString _id;
    bool _accepted;

};
