#include <qml/friendsmodel.hpp>
#include <core/duvido.hpp>
#include <api/apifriends.hpp>

#include <QJsonObject>
#include <QJsonArray>
#include <QSortFilterProxyModel>

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
    _selectedFriends = new SelectedFriendsModel(this);
    _selectedFriends->setSourceModel(this);
    _selectedFriends->setFilterRole(SelectedRole);
    refresh();
}

void FriendsModel::refresh() {
    auto result = new ApiFriends(this);
    connect(result, &Api::finished, [this, result]{
        result->deleteLater();

        beginRemoveRows(QModelIndex(), 0, _friends.count()-1);
        _friends.clear();
        endRemoveRows();

        beginInsertRows(QModelIndex(), 0, result->friends().size()-1);
        for (const User& user : result->friends()) {
            _friends.append({user, false});
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
        return _friends[i].user.id;
    case NameRole:
        return _friends[i].user.name;
    case SelectedRole:
        return _friends[i].selected;
    default:
        return QVariant();
    }
}

bool FriendsModel::setData(const QModelIndex& index, const QVariant& value, int role) {
    int i = index.row();
    switch (role) {
    case SelectedRole:
        _friends[i].selected = value.toBool();
        emit dataChanged(index, index, {SelectedRole});
        emit selectedCountChanged();
        return true;
    default:
        return false;
    }
}

int FriendsModel::selectedCount() const {
    return std::count_if(_friends.begin(), _friends.end(), [](const FriendInfo& f){return f.selected;});
}

QStringList FriendsModel::selectedIds() const {
    QStringList list;
    for (auto& f : _friends) {
        if (f.selected)
            list.append(f.user.id);
    }
    return list;
}
