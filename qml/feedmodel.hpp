#pragma once

#include <data/challenge.hpp>
#include <QAbstractListModel>

class FeedModel : public QAbstractListModel {
    Q_OBJECT

public:

    enum Roles {
        IdRole = Qt::UserRole + 1,
        OwnerRole,
        OwnerNameRole,
        TitleRole,
        DescriptionRole,
        RewardRole,
        DurationRole,
        ImageIdRole
    };

    FeedModel(QObject* parent = 0);

    void refresh();

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;

private:

    void fastRefreshFromCache();
    void dumpToCache();

private:

    QList<Challenge> _challenges;

};
