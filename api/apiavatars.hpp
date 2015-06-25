#pragma once

#include <api/api.hpp>

#include <QMap>

class User;

class ApiAvatars : public Api {
    Q_OBJECT

public:

    explicit ApiAvatars(QStringList ids, QObject* parent = nullptr);

    QMap<QString, QByteArray> avatars() const;

protected:

    void sendRequest() override;
    void processReply() override;

private:

    QStringList _ids;
    QMap<QString, QByteArray> _avatars;

};
