#pragma once

#include <QObject>

class QNetworkReply;
class QNetworkRequest;

class Api : public QObject {
    Q_OBJECT

public:

    static const QString version;

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
    virtual void sendRequest() = 0;
    virtual void processReply() = 0;
    virtual bool canHandleError();

protected:

    QNetworkReply* _reply;

private:

    bool _cancelling;
    float _uploadProgress;
    float _downloadProgress;

};
