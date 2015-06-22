#pragma once

#include "api.hpp"

class User;

class ApiLogin : public Api {
    Q_OBJECT

public:

    explicit ApiLogin(QObject* parent = nullptr);

    bool hasCache() const;
    bool changedFromCache() const;
    User* user() const;

protected:

    void processReply();

private:

    bool _cache;
    bool _changed;
    QString _id;
    QString _name;

};
