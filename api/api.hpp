#pragma once

#include <QObject>

class QNetworkReply;
class QNetworkRequest;

class Api : public QObject {
    Q_OBJECT

public:

    explicit Api(QObject* parent = nullptr);
    ~Api();

    float uploadProgress() const;
    float downloadProgress() const;
    bool isFinished() const;
    int status() const;
    bool isSuccessful() const;

    void cancel();

signals:

    void uploadProgressChanged();
    void downloadProgressChanged();
    void finished();

protected:

    QNetworkRequest request(QString endpoint, QVariantMap args);
    void setupReply();
    virtual void processReply() = 0;

protected:

    QNetworkReply* _reply;
    float _uploadProgress;
    float _downloadProgress;

};
