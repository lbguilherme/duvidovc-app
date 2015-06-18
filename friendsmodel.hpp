#pragma once

#include "user.hpp"

#include <QAbstractListModel>
#include <QSortFilterProxyModel>

class FriendsModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(QSortFilterProxyModel* selectedFriends READ selectedFriends CONSTANT)
    Q_PROPERTY(int selectedCount READ selectedCount NOTIFY selectedCountChanged)

public:

    enum Roles {
        IdRole = Qt::UserRole + 1,
        NameRole,
        SelectedRole
    };

    FriendsModel(QObject* parent = 0);

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::DisplayRole);
    QSortFilterProxyModel* selectedFriends() const;
    int selectedCount() const;

signals:

    void selectedCountChanged();

private:

    void refresh();

private:

    QString _userId;
    QList<User*> _friends;
    QList<bool> _selected;
    QSortFilterProxyModel* _selectedFriends;

};
