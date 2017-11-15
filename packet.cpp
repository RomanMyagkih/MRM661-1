#include "packet.h"
#include <QDebug>

Packet::Packet()
{
    qDebug() << "Constructor started!";
}

Packet::~Packet()
{
    qDebug() << "Destructor started!";
}

EthPacket::EthPacket()
{
    //len = 0;
    qDebug() << "Eth Constructor started!";
}

EthPacket::~EthPacket()
{
    qDebug() << "Eth Destructor started!";
}
IpPacket::IpPacket()
{
    //len = 0;
    qDebug() << "Ip Constructor started!";
}

IpPacket::~IpPacket()
{
    qDebug() << "Ip Destructor started!";
}
void Packet::show()
{
    qDebug() << "Packet show()";
}

void EthPacket::show()
{
    qDebug() << "EthPacket show()";
}
void IpPacket::show()
{
    qDebug() << "IpPacket show()";
}
