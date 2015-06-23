#include <qml/avatarloader.hpp>
#include <core/duvido.hpp>
#include <core/avatarmanager.hpp>

#include <QQuickItem>

AvatarLoader::AvatarLoader(QObject* parent) : QObject(parent), _target(nullptr) {
    connect(duvido->avatarManager(), &AvatarManager::avatarFetched, this, &AvatarLoader::checkFetchedAvatar);
}

QString AvatarLoader::userId() const {
    return _userId;
}

void AvatarLoader::setUserId(const QString& userId) {
    _userId = userId;
    if (_target)
        _target->setProperty("source", "");

    duvido->avatarManager()->fetchAvatar(userId);
}

QQuickItem* AvatarLoader::target() const {
    return _target;
}

void AvatarLoader::setTarget(QQuickItem* target) {
    if (_target)
        target->setProperty("source", _target->property("source"));

    _target = target;
}

void AvatarLoader::checkFetchedAvatar(QString id, QUrl url) {
    if (id == _userId && _target)
        _target->setProperty("source", url);
}
