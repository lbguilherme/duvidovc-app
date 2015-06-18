#pragma once

class QUrl;
class QString;
class QStringList;

class ApiLoginResult;
class ApiFriendsResult;

class DuvidoApi {
public:

    ApiLoginResult* login(QString token);
    ApiFriendsResult* friends(QString id);

    QUrl avatarUrl(QString id);
    QUrl avatarsUrl(QStringList ids);

};
