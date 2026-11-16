#ifndef TCPFILESERVER_H
#define TCPFILESERVER_H

#include <QDialog>
#include <QtNetwork>
#include <QtWidgets>

class TcpFileServer : public QDialog
{
    Q_OBJECT

public:
    explicit TcpFileServer(QWidget *parent = nullptr);
    ~TcpFileServer() override;
public slots:
    void start();
    void accpetConnection();
    void updateServerProgress();
    void displayError(QAbstractSocket::SocketError socketError);
};
#endif // TCPFILESERVER_H
