#pragma once

#include "api.hpp"

#include <QMap>

class User;

class ApiAvatars : public Api {
    Q_OBJECT

public:

    explicit ApiAvatars(QStringList ids, QObject* parent = nullptr);

    QMap<QString, QByteArray> avatars() const;

protected:

    void processReply();

private:

    QStringList _ids;
    QMap<QString, QByteArray> _avatars;

};
