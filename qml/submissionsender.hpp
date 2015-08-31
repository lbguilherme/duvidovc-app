#pragma once

#include <data/presubmission.hpp>
#include <QObject>
#include <QUrl>

class ApiUploadImage;

class SubmissionSender : public QObject {
    Q_OBJECT
    Q_PROPERTY(QString challenge READ challenge WRITE setChallenge NOTIFY challengeChanged)
    Q_PROPERTY(QString text READ text WRITE setText NOTIFY textChanged)
    Q_PROPERTY(QUrl image READ image WRITE setImage NOTIFY imageChanged)

public:

    SubmissionSender(QObject* parent = nullptr);

    QString challenge() const;
    void setChallenge(const QString& challenge);

    QString text() const;
    void setText(const QString& text);

    QUrl image() const;
    void setImage(const QUrl& image);

    int orientation() const;
    void setOrientation(int orientation);

    Q_INVOKABLE void submit();

signals:

    void challengeChanged();
    void textChanged();
    void imageChanged();
    void submitted();

private:

    PreSubmission _info;
    int _orientation;
    QString _imageSource;

};
