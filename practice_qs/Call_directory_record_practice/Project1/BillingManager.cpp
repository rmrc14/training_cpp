// BillingManager.cpp
#include "BillingManager.h"
#include <iostream>
#include <iomanip>
#include <fstream>

void BillingManager::computeBilling(const std::vector<CDRRecord>& records) {
    billingData.clear();
    for (const auto& r : records) {
        BillingInfo& b = billingData[r.msisdn];
        if (r.callType == "SMS-MO" || r.callType == "SMS-MT") b.totalSMS++;
        else if (r.callType == "GPRS") b.totalGPRS += (r.uploadMB + r.downloadMB);
        else if (r.callType == "MOC" || r.callType == "MTC") b.totalCallDuration += r.duration;
    }
}

void BillingManager::displayReport() {
    std::cout << "\nCustomer Billing Report\n";
    std::cout << "MSISDN\t\tSMS\tCall(s)\tGPRS(MB)\tAmount\n";
    for (const auto& [msisdn, b] : billingData) {
        double total = b.totalSMS * 0.5 + b.totalCallDuration * 0.05 + b.totalGPRS * 1.0;
        std::cout << msisdn << "\t" << b.totalSMS << "\t" << b.totalCallDuration
            << "\t" << b.totalGPRS << "\t\t₹" << std::fixed << std::setprecision(2) << total << "\n";
    }
}

void BillingManager::exportReport(const std::string& filename) {
    std::ofstream fout(filename);
    if (!fout) return;
    fout << "MSISDN,SMS,CallDuration,GPRS,Total\n";
    for (const auto& [msisdn, b] : billingData) {
        double total = b.totalSMS * 0.5 + b.totalCallDuration * 0.05 + b.totalGPRS * 1.0;
        fout << msisdn << "," << b.totalSMS << "," << b.totalCallDuration
            << "," << b.totalGPRS << "," << total << "\n";
    }
}
