#pragma once

#include <api/api.hpp>
#include <data/challenge.hpp>

class ApiFeed : public Api {
    Q_OBJECT

public:

    explicit ApiFeed(QObject* parent = nullptr);

    const QList<Challenge>& challenges() const { return _challenges; }

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QList<Challenge> _challenges;

};
