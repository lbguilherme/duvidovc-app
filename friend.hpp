#pragma once

#include "user.hpp"

class Friend : public User {
    Q_OBJECT
    Q_PROPERTY(bool selected READ selected WRITE setSelected NOTIFY selectedChanged)

public:

    using User::User;
    bool selected() const;
    void setSelected(bool selected);

signals:

    void selectedChanged();

private:

    bool _selected = false;

};
