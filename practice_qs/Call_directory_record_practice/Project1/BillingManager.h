// BillingManager.h
#ifndef BILLING_MANAGER_H
#define BILLING_MANAGER_H

#include <unordered_map>
#include <vector>
#include "CDRRecord.h"

struct BillingInfo {
    int totalSMS = 0;
    int totalCallDuration = 0;
    double totalGPRS = 0.0;
};

class BillingManager {
    std::unordered_map<std::string, BillingInfo> billingData;

public:
    void computeBilling(const std::vector<CDRRecord>& records);
    void displayReport();
    void exportReport(const std::string& filename);
};

#endif
