#pragma once

#include "apiresult.hpp"

class User;

class ApiLoginResult : public ApiResult {
    Q_OBJECT

public:

    using ApiResult::ApiResult;

    User* user() const;

protected:

    void processReply();

private:

    QString _id;
    QString _name;

};
