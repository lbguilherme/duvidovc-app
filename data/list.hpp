#pragma once

#include <QJsonObject>
#include <QJsonArray>

template <typename T>
QJsonArray toJson(const QList<T>& list) {
    QJsonArray arr;
    for (const T& data : list) {
        arr.append(data.toJson());
    }
    return arr;
}

template <typename T>
QList<T> fromJson(const QJsonArray& arr) {
    QList<T> list;
    for (auto value : arr) {
        list.append(T().fromJson(value.toObject()));
    }
    return list;
}

