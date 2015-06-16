#include "challengecreator.hpp"

ChallengeCreator::ChallengeCreator(QObject* parent)
    : QObject(parent)
    , _targets(nullptr){

}

QString ChallengeCreator::title() const {
    return _title;
}

void ChallengeCreator::setTitle(const QString& title) {
    if (_title == title) return;
    _title = title;
    emit titleChanged();
}

QString ChallengeCreator::description() const {
    return _description;
}

void ChallengeCreator::setDescription(const QString& description) {
    if (_description == description) return;
    _description = description;
    emit descriptionChanged();
}

QString ChallengeCreator::reward() const {
    return _reward;
}

void ChallengeCreator::setReward(const QString& reward) {
    if (_reward == reward) return;
    _reward = reward;
    emit rewardChanged();
}

FriendsModel *ChallengeCreator::targets() const {
    return _targets;
}

void ChallengeCreator::setTargets(FriendsModel* targets) {
    if (_targets == targets) return;
    _targets = targets;
    emit targetsChanged();
}

unsigned ChallengeCreator::duration() const {
    return _duration;
}

void ChallengeCreator::setDuration(unsigned duration) {
    if (_duration == duration) return;
    _duration = duration;
    emit durationChanged();
}

QUrl ChallengeCreator::image() const {
    return _image;
}

void ChallengeCreator::setImage(const QUrl& image) {
    if (_image == image) return;
    _image = image;
    emit imageChanged();
}

void ChallengeCreator::submit() {
    emit submitted();
}
