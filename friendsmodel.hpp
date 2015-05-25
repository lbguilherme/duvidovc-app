#pragma once

#include "friend.hpp"

#include <QAbstractListModel>
#include <QSortFilterProxyModel>

class FriendsModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(QSortFilterProxyModel* selectedFriends READ selectedFriends CONSTANT)

public:

    enum Roles {
        IdRole = Qt::UserRole + 1,
        NameRole,
        SelectedRole
    };

    FriendsModel(QString userId, QObject* parent = 0);

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::DisplayRole);
    QSortFilterProxyModel* selectedFriends() const;

private:

    void refresh(QString userId);

private:

    QString _userId;
    QList<Friend*> _friends;
    QSortFilterProxyModel* _selectedFriends;

};
