#pragma once

class User;
class QUrl;
class QString;
class QStringList;
template <typename A> class QList;
class QByteArray;
namespace std {
template <typename A> class function;
}

class DuvidoApi {
public:

    void login(QString token, std::function<void(User*)> callback);
    QUrl avatarUrl(QString id);
    QUrl avatarsUrl(QStringList ids);
    void friends(QString id, std::function<void(QList<User*>)> callback);
    void upload(QString token, QByteArray data, std::function<void(QString)> callback, std::function<void(double)> uploadProgress);
    void createChallenge(QString title, QString description, QString reward, QStringList targets,
                         unsigned duration, QString imageId, std::function<void()> callback);

};
