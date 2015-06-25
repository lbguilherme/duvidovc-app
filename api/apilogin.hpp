#pragma once

#include <api/api.hpp>

class ApiLogin : public Api {
    Q_OBJECT

public:

    explicit ApiLogin(QObject* parent = nullptr);

    bool hasCache() const;
    bool changedFromCache() const;
    QString id() const;
    QString name() const;

protected:

    void sendRequest() override;
    void processReply() override;

private:

    bool _cache;
    bool _changed;
    QString _id;
    QString _name;

};
