#pragma once

#include <data/submission.hpp>
#include <QAbstractListModel>

class PostingSubmission;

class PlayingModel : public QAbstractListModel {
    Q_OBJECT

public:

    enum Roles {
        ChallengeIdRole = Qt::UserRole + 1,
        TextRole,
        TitleRole,
        DetailsRole,
        RewardRole,
        DurationRole,
        ImageIdRole,
        CreationTimeRole,
        StatusRole,
        SentTimeRole,
        JudgedTimeRole,
        ChallengeOwnerIdRole,
        ChallengeOwnerNameRole,
        RatioRole,
        TimeLeftRole
    };

    PlayingModel(QObject* parent = 0);
    virtual ~PlayingModel();

    void refresh();

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

private:

    void fastRefreshFromCache();
    void dumpToCache();

private:

    QList<QMetaObject::Connection> _connections;
    QList<PostingSubmission*> _postings;
    QList<Submission> _submissions;

};
