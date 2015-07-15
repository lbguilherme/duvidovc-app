#pragma once

#include <QAbstractListModel>

class PostingChallenge;

class MyChallengesModel : public QAbstractListModel {
    Q_OBJECT

public:

    enum Roles {
        IdRole = Qt::UserRole + 1,
        TitleRole,
        DescriptionRole,
        RewardRole,
        DurationRole,
        ImageIdRole,
        IsSendingRole,
        SendingProgressRole
    };

    MyChallengesModel(QObject* parent = 0);

    void refresh();

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

private:

    struct MyChallenge {
        QString id;
        QString title;
        QString description;
        QString reward;
        unsigned duration;
        QString imageId;
        PostingChallenge* pending;
    };

    QList<MyChallenge> _myChallenges;

};