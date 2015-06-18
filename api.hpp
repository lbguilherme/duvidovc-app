#pragma once

#include <QObject>

class QNetworkReply;
class QNetworkRequest;

class Api : public QObject {
    Q_OBJECT
    Q_PROPERTY(double progress READ progress NOTIFY progressChanged)
    Q_PROPERTY(bool isFinished READ isFinished NOTIFY finished)
    Q_PROPERTY(int status READ status NOTIFY finished)

public:

    explicit Api(QObject* parent = nullptr);

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
