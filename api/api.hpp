#pragma once

#include <QObject>

class QNetworkReply;
class QNetworkRequest;

class Api : public QObject {
    Q_OBJECT

public:

    explicit Api(QObject* parent = nullptr);
    ~Api();

    double progress() const;
    bool isFinished() const;
    int status() const;
    bool isSuccessful() const;

    void cancel();

signals:

    void progressChanged();
    void finished();

protected:

    QNetworkRequest request(QString endpoint, QVariantMap args);
    void setupReply();
    virtual void processReply() = 0;

protected:

    QNetworkReply* _reply;

};
