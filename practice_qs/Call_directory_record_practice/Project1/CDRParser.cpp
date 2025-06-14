// CDRParser.cpp
#include "CDRParser.h"
#include <fstream>
#include <sstream>

std::vector<CDRRecord> CDRParser::parseFile(const std::string& filename) {
    std::vector<CDRRecord> records;
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string token;
        CDRRecord r;
        std::getline(ss, r.msisdn, '|');
        std::getline(ss, r.operatorName, '|');
        std::getline(ss, r.operatorCode, '|');
        std::getline(ss, r.callType, '|');

        std::getline(ss, token, '|');
        r.duration = std::stoi(token);
        std::getline(ss, token, '|');
        r.uploadMB = std::stod(token);
        std::getline(ss, token, '|');
        r.downloadMB = std::stod(token);
        std::getline(ss, r.thirdPartyMsisdn, '|');
        std::getline(ss, r.thirdPartyCode, '|');

        records.push_back(r);
    }

    return records;
}
