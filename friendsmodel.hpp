#pragma once

#include "friend.hpp"

#include <QAbstractListModel>

class FriendsModel : public QAbstractListModel
{
    Q_OBJECT

public:

    enum Roles {
        IdRole = Qt::UserRole + 1,
        NameRole,
        SelectedRole
    };

    FriendsModel(QObject* parent = 0);
    void refresh(QString userId);

    QHash<int, QByteArray> roleNames() const;
    int rowCount(const QModelIndex& parent = QModelIndex()) const;
    QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::DisplayRole);

private:

    QString _userId;
    QList<Friend*> _friends;

};
