#pragma once

#include <QObject>
#include <QUrl>

class FriendsModel;
class ApiUpload;

class ChallengeCreator : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString title READ title WRITE setTitle NOTIFY titleChanged)
    Q_PROPERTY(QString description READ description WRITE setDescription NOTIFY descriptionChanged)
    Q_PROPERTY(QString reward READ reward WRITE setReward NOTIFY rewardChanged)
    Q_PROPERTY(FriendsModel* targets READ targets WRITE setTargets NOTIFY targetsChanged)
    Q_PROPERTY(unsigned duration READ duration WRITE setDuration NOTIFY durationChanged)
    Q_PROPERTY(QUrl image READ image WRITE setImage NOTIFY imageChanged)

public:

    ChallengeCreator(QObject* parent = nullptr);

    QString title() const;
    void setTitle(const QString &title);

    QString description() const;
    void setDescription(const QString &description);

    QString reward() const;
    void setReward(const QString &reward);

    FriendsModel *targets() const;
    void setTargets(FriendsModel *targets);

    unsigned duration() const;
    void setDuration(unsigned duration);

    QUrl image() const;
    void setImage(const QUrl &image);

    Q_INVOKABLE void submit();

signals:

    void titleChanged();
    void descriptionChanged();
    void rewardChanged();
    void targetsChanged();
    void durationChanged();
    void imageChanged();
    void submitted();

private:

    QString _title;
    QString _description;
    QString _reward;
    FriendsModel* _targets;
    unsigned _duration;
    QUrl _image;
    ApiUpload* _imageUpload;

};
