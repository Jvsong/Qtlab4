#ifndef SERVERWORKER_H
#define SERVERWORKER_H

#include <QObject>
#include <QTcpSocket>

class ServerWorker : public QObject
{
    Q_OBJECT
public:
    explicit ServerWorker(QObject *parent = nullptr);
    virtual bool setSocketDescription(qintptr socketDescriptor);

    QString userName();
    void setUserName(QString user);

signals:
    void logMessage(const QString &msg);
    void jsonReceived(ServerWorker *sender,const QJsonObject &docObj);
    void disconnectFromClient();

private:
    QTcpSocket *m_serverSocket;
    QString m_username;


public slots:
    void onReadyRead();
    void sendMessage(const QString &text,const QString &type = "message");
    void sendJson(const QJsonObject &json);
};

#endif // SERVERWORKER_H
