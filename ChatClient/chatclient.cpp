#include "chatclient.h"
#include <QDataStream>
#include <QJsonObject>
#include <QJsonDocument>

ChatClient::ChatClient(QObject *parent)
    : QObject{parent}
{
    m_clientSocket = new QTcpSocket(this);

    connect(m_clientSocket, &QTcpSocket::connected, this, &ChatClient::connected);
    connect(m_clientSocket, &QTcpSocket::readyRead, this, &ChatClient::onReadyRead);

}

void ChatClient::onReadyRead()
{
    QByteArray jsonData;//存放读取到的数据
    QDataStream socketStream(m_clientSocket);
    socketStream.setVersion(QDataStream::Qt_6_7);

    for(;;){
        socketStream.startTransaction();//开始事务读数据
        socketStream >> jsonData;//从QDataStream中读取数据到jsonData,>>为写入数据

        if(socketStream.commitTransaction()){//事务提交成功

            QJsonParseError parseError;
            const QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData,&parseError);
            if(parseError.error == QJsonParseError::NoError){
                if(jsonDoc.isObject()){
                    emit jsonReceived(jsonDoc.object());
                }
            }
        }
        else{
            break;
        }
    }
}

void ChatClient::sendMessage(const QString &text, const QString &type)
{
    if (m_clientSocket->state() != QAbstractSocket::ConnectedState)
        return;

    if (!text.isEmpty()) {
        // Create a QDataStream operating on the socket
        QDataStream serverStream(m_clientSocket);
        serverStream.setVersion(QDataStream::Qt_5_12);

        // Create the JSON we want to send
        QJsonObject message;
        message["type"] = type;
        message["text"] = text;

        // Send the JSON using QDataStream
        serverStream << QJsonDocument(message).toJson();
    }
}

void ChatClient::connectToServer(const QHostAddress &address, quint16 port)
{
    m_clientSocket->connectToHost(address,port);
}

void ChatClient::disconnectToServer()
{
    m_clientSocket->disconnectFromHost();
}
