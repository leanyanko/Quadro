#ifndef WEATHERBALOON_H
#define WEATHERBALOON_H

#include <QPushButton>
//#include <QtNetwork>
#include <QUdpSocket>
#include <QTimer>
#include <trikControl/brickInterface.h>

class DataTransfer : public QPushButton
{
    Q_OBJECT

public:
    DataTransfer(trikControl::BrickInterface *Brick, QWidget *parent = 0);


private slots:
    void sendDatagram();

private:
    QUdpSocket udpSocket;
    QTimer timer;

    //double gyroscope[3];
    //double accelerometer[3];

    trikControl::BrickInterface *brick;
};

#endif // WEATHERBALOON_H
