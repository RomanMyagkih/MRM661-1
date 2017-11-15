#ifndef PACKET_H
#define PACKET_H

#include <QObject>
#include <QVector>

struct PcapHeader
{
    qint32 t1;
    qint32 t2;
    qint32 caplen;
    qint32 len;
};

class Packet
{

public:
    PcapHeader pHeader;
    unsigned char data[2000];
    Packet();
    ~Packet();

    virtual void show();

    //void setLen(int l) { len = l; };
    //unsigned int getlen() { return len; };
};

struct PcapFHeader
{
    qint32 magic;
    qint16 version_major;
    qint16 version_minor;
    qint32 thiszone;     /* gmt to local correction */
    qint32 sigfigs;    /* accuracy of timestamps */
    qint32 snaplen;    /* max length saved portion of each pkt */
    qint32 linktype;   /* data link type (LINKTYPE_*) */
};

class PacketStream
{
public:
    PcapFHeader fHeader;
    QVector <Packet> packets;
};



class EthPacket : public Packet
{

public:
    EthPacket();
    ~EthPacket();

    virtual void show();

};

class IpPacket : public Packet
{

public:
    IpPacket();
    ~IpPacket();

    virtual void show();

};

#endif // PACKET_H
