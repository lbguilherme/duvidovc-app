#pragma once

#include "api.hpp"

class User;

class ApiLogin : public Api {
    Q_OBJECT

public:

    explicit ApiLogin(QString token, QObject* parent = nullptr);

    User* user() const;

protected:

    void processReply();

private:

    QString _id;
    QString _name;

};
