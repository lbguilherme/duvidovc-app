#include "friend.hpp"

bool Friend::selected() const {
    return _selected;
}

void Friend::setSelected(bool selected) {
    if (_selected == selected) return;
    _selected = selected;
    emit selectedChanged();
}
