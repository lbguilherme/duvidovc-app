#include <qml/challengecreator.hpp>
#include <qml/friendsmodel.hpp>
#include <api/apiupload.hpp>
#include <core/postingchallenge.hpp>
#include <core/duvido.hpp>

ChallengeCreator::ChallengeCreator(QObject* parent)
    : QObject(parent)
    , _targets(nullptr)
    , _imageUpload(nullptr) {

}

QString ChallengeCreator::title() const {
    return _info.title;
}

void ChallengeCreator::setTitle(const QString& title) {
    if (_info.title == title) return;
    _info.title = title;
    emit titleChanged();
}

QString ChallengeCreator::description() const {
    return _info.description;
}

void ChallengeCreator::setDescription(const QString& description) {
    if (_info.description == description) return;
    _info.description = description;
    emit descriptionChanged();
}

QString ChallengeCreator::reward() const {
    return _info.reward;
}

void ChallengeCreator::setReward(const QString& reward) {
    if (_info.reward == reward) return;
    _info.reward = reward;
    emit rewardChanged();
}

FriendsModel* ChallengeCreator::targets() const {
    return _targets;
}

void ChallengeCreator::setTargets(FriendsModel* targets) {
    if (_targets == targets) return;
    _targets = targets;
    emit targetsChanged();
}

unsigned ChallengeCreator::duration() const {
    return _info.duration;
}

void ChallengeCreator::setDuration(unsigned duration) {
    if (_info.duration == duration) return;
    _info.duration = duration;
    emit durationChanged();
}

QUrl ChallengeCreator::image() const {
    return _imageUpload ? _imageUpload->sourcePath() : "";
}

void ChallengeCreator::setImage(const QUrl& image) {
    if (_imageUpload &&
            QUrl::fromLocalFile(_imageUpload->sourcePath()) == image)
        return;

    if (_imageUpload)
        _imageUpload->deleteLater();

    if (image.isEmpty())
        _imageUpload = nullptr;
    else {
        Q_ASSERT(image.isLocalFile());
        _imageUpload = new ApiUpload(image.toLocalFile(), this);
    }

    emit imageChanged();
}

void ChallengeCreator::submit() {
    _info.targetIds = _targets->selectedIds();

    if (_imageUpload)
        duvido->addPostingChallenge(new PostingChallenge(_info, _imageUpload));
    else
        duvido->addPostingChallenge(new PostingChallenge(_info));

    emit submitted();
}
