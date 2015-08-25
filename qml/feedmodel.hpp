#pragma once

#include <data/challenge.hpp>
#include <QAbstractListModel>

class FeedModel : public QAbstractListModel {
    Q_OBJECT
    Q_PROPERTY(int rowCount READ rowCount NOTIFY rowCountChanged)

public:

    enum Roles {
        IdRole = Qt::UserRole + 1,
        OwnerRole,
        OwnerNameRole,
        TitleRole,
        DetailsRole,
        RewardRole,
        TimeLeftRole,
        ImageIdRole,
        ImageRatioRole
    };

    FeedModel(QObject* parent = 0);
    virtual ~FeedModel();

    void refresh();
    void checkExpired();

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

private:

    void fastRefreshFromCache();
    void dumpToCache();

signals:

    void rowCountChanged();

private:

    QList<QMetaObject::Connection> _connections;
    QList<Challenge> _challenges;

};
