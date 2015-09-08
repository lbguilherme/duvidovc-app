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
        DetailsRole,
        RewardRole,
        DurationRole,
        ImageIdRole,
        CreationTimeRole,
        TargetsRole,
        IsSendingRole
    };

    MyChallengesModel(QObject* parent = 0);
    virtual ~MyChallengesModel();

    void refresh();

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

private:

    void fastRefreshFromCache();
    void dumpToCache();

private:

    QList<QMetaObject::Connection> _connections;
    QList<PostingChallenge*> _postings;
    QList<MyChallenge> _myChallenges;

};
