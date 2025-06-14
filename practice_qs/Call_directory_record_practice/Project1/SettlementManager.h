// SettlementManager.h
#ifndef SETTLEMENT_MANAGER_H
#define SETTLEMENT_MANAGER_H

#include <unordered_map>
#include <vector>
#include "CDRRecord.h"

class SettlementManager {
    std::unordered_map<std::string, std::unordered_map<std::string, double>> settlements;

public:
    void computeSettlement(const std::vector<CDRRecord>& records);
    void displayReport();
    void exportReport(const std::string& filename);
};

#endif
