#include "challengecreationinfo.hpp"

ChallengeCreationInfo::ChallengeCreationInfo(QObject* parent)
    : QObject(parent)
    , _targets(nullptr){

}

QString ChallengeCreationInfo::title() const {
    return _title;
}

void ChallengeCreationInfo::setTitle(const QString& title) {
    if (_title == title) return;
    _title = title;
    emit titleChanged();
}

QString ChallengeCreationInfo::description() const {
    return _description;
}

void ChallengeCreationInfo::setDescription(const QString& description) {
    if (_description == description) return;
    _description = description;
    emit descriptionChanged();
}

QString ChallengeCreationInfo::reward() const {
    return _reward;
}

void ChallengeCreationInfo::setReward(const QString& reward) {
    if (_reward == reward) return;
    _reward = reward;
    emit rewardChanged();
}

FriendsModel *ChallengeCreationInfo::targets() const {
    return _targets;
}

void ChallengeCreationInfo::setTargets(FriendsModel* targets) {
    if (_targets == targets) return;
    _targets = targets;
    emit targetsChanged();
}

unsigned ChallengeCreationInfo::duration() const {
    return _duration;
}

void ChallengeCreationInfo::setDuration(unsigned duration) {
    if (_duration == duration) return;
    _duration = duration;
    emit durationChanged();
}

QUrl ChallengeCreationInfo::image() const {
    return _image;
}

void ChallengeCreationInfo::setImage(const QUrl& image) {
    if (_image == image) return;
    _image = image;
    emit imageChanged();
}
