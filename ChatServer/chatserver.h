#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <QObject>
#include <QTcpServer>
#include "serverworker.h"

class ChatServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit ChatServer(QObject *parent = nullptr);

protected:
    void incomingConnection(qintptr sockerDescriptar) override;
    QVector<ServerWorker*>m_clients;

signals:
    void logMessage(const QString& mag);

public slots:
    void stopServer();

};

#endif // CHATSERVER_H
