
#include"header.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Packet.h"
#include "Logger.h"

bool loadPacketsFromFile(const std::string, std::vector<Packet>&, Logger&);
void filterByProtocol(const std::vector<Packet>& , Logger& ,const std::string& );
void checkLargePackets(const std::vector<Packet>&, Logger& , const std::string&);
void exportLog(const std::string&);

int main()
{
	Logger logger("netmon_log.txt");

	std::vector<Packet> packets;

	void (*funcptr)(const std::vector<Packet>&, Logger&, const std::string&) = nullptr;

    std::string protocolChoice;


    while (true) {
        std::cout << "\n==== NetMon Packet Monitor ====\n"
            << "1. Load packet data\n"
            << "2. Filter by protocol\n"
            << "3. Check for large packets\n"
            << "4. Export log\n"
            << "5. Exit\n> ";

        std::string choice;
        std::cin >> choice;

        if (choice == "1") {
            loadPacketsFromFile("packets.txt", packets, logger);
        }
        else if (choice == "2") {
            std::cout << "Enter protocol to filter (TCP/UDP/ICMP): ";
            std::cin >> protocolChoice;
            funcptr = filterByProtocol;
            logger.log(INFO, "Selected protocol filter for " + protocolChoice);
        }
        else if (choice == "3") {
            funcptr = checkLargePackets;
            logger.log(INFO, "Selected large packet checker");
        }
        else if (choice == "4") {
            exportLog("netmon_log.txt");
            logger.log(INFO, "Logs saved to netmon_log.txt.");
        }
        else if (choice == "5") {
            break;
        }
        else {
            logger.log(WARNING, "Invalid menu option.");
        }

        if ((choice == "2" || choice == "3") && funcptr) // calling function pointer before 
        {                                                //next iteration
           funcptr(packets, logger, protocolChoice);
        }
    }
    std::cout << "program exited successfully";
	return 0;
}

void exportLog(const std::string& filename = "netmon_log.txt")
{
    std::ifstream fin;
    fin.open(filename);
    if (!fin.is_open()) {
        std::cerr << "Failed to open log file for export.\n";
        return;
    }

    std::cout << "\n===== Exported Log =====\n";
    std::string line;
    while (std::getline(fin, line)) {
        std::cout << line << '\n';
    }
    std::cout << "=========================\n";
    fin.close();
}



void checkLargePackets(const std::vector<Packet>& packets, Logger& logger,
    const std::string& unused = "") 
{
    for (const auto& pkt : packets) 
    {
        if (pkt.size > 1000) {
            logger.log(WARNING, "Packet " + std::to_string(pkt.packetID) + " | " 
                + pkt.protocol + " | " + std::to_string(pkt.size) + " bytes");
        }
    }
}

void filterByProtocol(const std::vector<Packet>& packets, Logger& logger,
    const std::string& protocol)
{
    for (const auto& pkt : packets) {
        if (pkt.protocol == protocol) 
        {
            logger.log(DEBUG, "Packet " + std::to_string(pkt.packetID) + " | "
                + pkt.protocol + " | " + std::to_string(pkt.size) + " bytes");
        }
    }
}


bool loadPacketsFromFile(const std::string filename, std::vector<Packet>& pack, Logger& logger)
{
    std::ifstream   fin;
    fin.open(filename, std::ios::in);
    if (!fin.is_open())
    {
        logger.log(ERROR, "could not open netmon.txt");
        return false;
    }

    std::string line;


    int lineNo = 0; // to identify where error occurs malformed data

    while (std::getline(fin, line))
    {
        lineNo++;
        int packetID;
        std::string protocol;
        int size;
        std::istringstream iss(line);
        if (iss >> packetID >> protocol >> size)
        {
            pack.emplace_back(packetID, protocol, size);
        }
        else
        {
            logger.log(ERROR, "malformed data at line " + std::to_string(lineNo));
        }
    }
    logger.log(INFO, "loaded " + std::to_string(pack.size()) + " packets.");
    return true;
}