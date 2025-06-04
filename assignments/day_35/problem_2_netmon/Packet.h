#pragma once
#include<string>


class Packet {
    public:
    int packetID;
    std::string protocol;
    int size;
    Packet(int id, const std::string& protocol, int sz)
        : packetID(id), protocol(protocol), size(sz) {}
};