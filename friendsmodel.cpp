#include "friendsmodel.hpp"
#include "duvido.hpp"

#include <QJsonObject>
#include <QJsonArray>

class SelectedFriendsModel : public QSortFilterProxyModel {
public:

    using QSortFilterProxyModel::QSortFilterProxyModel;

protected:

    bool filterAcceptsRow(int row, const QModelIndex& parent) const {
        (void)parent;
        auto index = sourceModel()->index(row, 0);
        return sourceModel()->data(index, filterRole()).toBool();
    }

};

FriendsModel::FriendsModel(QString userId, QObject* parent) : QAbstractListModel(parent) {
    refresh(userId);

    _selectedFriends = new SelectedFriendsModel(this);
    _selectedFriends->setSourceModel(this);
    _selectedFriends->setFilterRole(SelectedRole);
}

void FriendsModel::refresh(QString userId) {
    _userId = userId;

    beginRemoveRows(QModelIndex(), 0, _friends.count()-1);
    for (Friend* user : _friends) {
        user->deleteLater();
    }
    _friends.clear();
    endRemoveRows();

    duvido->api()->friends(_userId, [this, userId](QJsonArray resp){
        if (_userId != userId) return;
        beginInsertRows(QModelIndex(), 0, resp.count()-1);
        for (QJsonValue el : resp) {
            QJsonObject obj = el.toObject();
            _friends.append(new Friend(obj["id"].toString(), obj["name"].toString()));
        }
        endInsertRows();
    });
}

QSortFilterProxyModel* FriendsModel::selectedFriends() const {
    return _selectedFriends;
}


QHash<int, QByteArray> FriendsModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[IdRole] = "id";
    roles[NameRole] = "name";
    roles[SelectedRole] = "selected";
    return roles;
}

int FriendsModel::rowCount(const QModelIndex& parent) const {
    if (parent.isValid())
        return 0;
    else
        return _friends.count();
}

QVariant FriendsModel::data(const QModelIndex& index, int role) const {
    int i = index.row();
    switch (role) {
    case IdRole:
        return _friends[i]->id();
    case NameRole:
        return _friends[i]->name();
    case SelectedRole:
        return _friends[i]->selected();
    default:
        return QVariant();
    }
}

bool FriendsModel::setData(const QModelIndex& index, const QVariant& value, int role) {
    int i = index.row();
    switch (role) {
    case SelectedRole:
        _friends[i]->setSelected(value.toBool());
        emit dataChanged(index, index, {SelectedRole});
    default:
        return false;
    }
}
