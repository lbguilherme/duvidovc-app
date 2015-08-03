#pragma once

#include <data/mychallenge.hpp>
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
        CreationTimeRole,
        TargetsRole,
        IsSendingRole
    };

    MyChallengesModel(QObject* parent = 0);

    void refresh();

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

private:

    QList<PostingChallenge*> _postings;
    QList<MyChallenge> _myChallenges;

};
