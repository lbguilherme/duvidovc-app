#pragma once

#include <QAbstractListModel>

class QSortFilterProxyModel;

class FriendsModel : public QAbstractListModel {
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

    QStringList selectedIds() const;

signals:

    void selectedCountChanged();

private:

    void refresh();

private:

    struct FriendInfo {
        QString id;
        QString name;
        bool selected;
    };

    QList<FriendInfo> _friends;
    QSortFilterProxyModel* _selectedFriends;

};
