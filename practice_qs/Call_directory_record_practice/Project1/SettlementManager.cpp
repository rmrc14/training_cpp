// SettlementManager.cpp
#include "SettlementManager.h"
#include <iostream>
#include <iomanip>
#include <fstream>

void SettlementManager::computeSettlement(const std::vector<CDRRecord>& records) {
    settlements.clear();
    for (const auto& r : records) {
        if (!r.thirdPartyCode.empty() && r.operatorCode != r.thirdPartyCode) {
            settlements[r.operatorCode][r.thirdPartyCode] += 0.15; // fixed interconnect fee
        }
    }
}

void SettlementManager::displayReport() {
    std::cout << "\nInter-Operator Settlement Report\n";
    std::cout << "From -> To\tAmount\n";
    for (const auto& from : settlements) {
        for (const auto& to : from.second) {
            std::cout << from.first << " -> " << to.first << "\t₹" << std::fixed
                << std::setprecision(2) << to.second << "\n";
        }
    }
}

void SettlementManager::exportReport(const std::string& filename) {
    std::ofstream fout(filename);
    fout << "From,To,Amount\n";
    for (const auto& from : settlements) {
        for (const auto& to : from.second) {
            fout << from.first << "," << to.first << "," << to.second << "\n";
        }
    }
}
