// SearchEngine.h
#ifndef SEARCH_ENGINE_H
#define SEARCH_ENGINE_H

#include <vector>
#include <string>
#include "CDRRecord.h"

class SearchEngine {
public:
    void searchByMSISDN(const std::vector<CDRRecord>& records, const std::string& msisdn);
    void searchByOperator(const std::vector<CDRRecord>& records, const std::string& operatorCode);
};

#endif
