#pragma once

#include <QString>
#include <QObject>

class Facebook : public QObject{
    Q_OBJECT
public:

    static constexpr const char* appId = "1497042670584041";

    Facebook();
    Q_INVOKABLE void login();

};
