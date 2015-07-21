#pragma once

#include <api/api.hpp>
#include <data/me.hpp>

class ApiLogin : public Api {
    Q_OBJECT

public:

    explicit ApiLogin(QObject* parent = nullptr);

    bool hasCache() const;
    bool changedFromCache() const;

    const Me& me() const { return _me; }

protected:

    void sendRequest() override;
    void processReply() override;

private:

    bool _cache;
    bool _changed;
    Me _me;

};
