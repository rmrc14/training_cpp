// SearchEngine.cpp
#include "SearchEngine.h"
#include <iostream>

void SearchEngine::searchByMSISDN(const std::vector<CDRRecord>& records, const std::string& msisdn) {
    for (const auto& r : records) {
        if (r.msisdn == msisdn) {
            std::cout << r.msisdn << " | " << r.callType << " | " << r.duration << " | "
                << r.uploadMB << "MB/" << r.downloadMB << "MB\n";
        }
    }
}

void SearchEngine::searchByOperator(const std::vector<CDRRecord>& records, const std::string& operatorCode) {
    for (const auto& r : records) {
        if (r.operatorCode == operatorCode) {
            std::cout << r.msisdn << " | " << r.callType << " | " << r.duration << " | "
                << r.uploadMB << "MB/" << r.downloadMB << "MB\n";
        }
    }
}
