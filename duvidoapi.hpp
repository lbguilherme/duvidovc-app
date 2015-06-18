#pragma once

class QUrl;
class QString;
class QStringList;

// Deprecated
class DuvidoApi {
public:

    QUrl avatarUrl(QString id);
    QUrl avatarsUrl(QStringList ids);

};
