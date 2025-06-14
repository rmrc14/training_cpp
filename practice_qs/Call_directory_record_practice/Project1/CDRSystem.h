// CDRSystem.h
#ifndef CDR_SYSTEM_H
#define CDR_SYSTEM_H

#include <vector>
#include "CDRRecord.h"
#include "CDRParser.h"
#include "BillingManager.h"
#include "SettlementManager.h"
#include "SearchEngine.h"
#include "Logger.h"

class CDRSystem {
    std::vector<CDRRecord> records;
    CDRParser parser;
    BillingManager billingManager;
    SettlementManager settlementManager;
    SearchEngine searchEngine;

public:
    void run();
};

#endif
