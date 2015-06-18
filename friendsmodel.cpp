#include "friendsmodel.hpp"
#include "duvido.hpp"
#include "apifriendsresult.hpp"

#include <QJsonObject>
#include <QJsonArray>

#include <algorithm>
#include <functional>

class SelectedFriendsModel : public QSortFilterProxyModel {
public:

    using QSortFilterProxyModel::QSortFilterProxyModel;

protected:

    bool filterAcceptsRow(int row, const QModelIndex&) const {
        auto index = sourceModel()->index(row, 0);
        return sourceModel()->data(index, filterRole()).toBool();
    }

};

FriendsModel::FriendsModel(QObject* parent) : QAbstractListModel(parent) {
    refresh(duvido->me()->id());

    _selectedFriends = new SelectedFriendsModel(this);
    _selectedFriends->setSourceModel(this);
    _selectedFriends->setFilterRole(SelectedRole);
}

void FriendsModel::refresh(QString userId) {
    _userId = userId;

    beginRemoveRows(QModelIndex(), 0, _friends.count()-1);
    for (User* user : _friends) {
        user->deleteLater();
    }
    _friends.clear();
    _selected.clear();
    endRemoveRows();

    auto result = duvido->api()->friends(_userId);
    connect(result, &ApiResult::finished, [this, userId, result]{
        if (_userId != userId) return;
        beginInsertRows(QModelIndex(), 0, result->count()-1);
        _friends = result->friends();
        for (int i = 0; i < _friends.size(); ++i)
            _selected.append(false);
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
        return _selected[i];
    default:
        return QVariant();
    }
}

bool FriendsModel::setData(const QModelIndex& index, const QVariant& value, int role) {
    int i = index.row();
    switch (role) {
    case SelectedRole:
        _selected[i] = value.toBool();
        emit dataChanged(index, index, {SelectedRole});
        emit selectedCountChanged();
        return true;
    default:
        return false;
    }
}

int FriendsModel::selectedCount() const {
    return std::count(_selected.begin(), _selected.end(), true);
}
