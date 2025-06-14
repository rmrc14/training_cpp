// CDRSystem.cpp
#include "CDRSystem.h"
#include <iostream>

void CDRSystem::run() {
    std::string filename = "data.cdr";
    records = parser.parseFile(filename);

    if (records.empty()) {
        std::cout << "No records parsed.\n";
        return;
    }

    billingManager.computeBilling(records);
    settlementManager.computeSettlement(records);

    int choice;
    do {
        std::cout << "\n--- CDR Processing Menu ---\n";
        std::cout << "1. View Billing Report\n2. View Settlement Report\n";
        std::cout << "3. Search by MSISDN\n4. Search by Operator Code\n";
        std::cout << "5. Export Billing Report\n6. Export Settlement Report\n";
        std::cout << "0. Exit\nChoice: ";
        std::cin >> choice;

        std::string input;
        switch (choice) {
        case 1:
            billingManager.displayReport();
            Logger::log("Viewed billing report");
            break;
        case 2:
            settlementManager.displayReport();
            Logger::log("Viewed settlement report");
            break;
        case 3:
            std::cout << "Enter MSISDN: ";
            std::cin >> input;
            searchEngine.searchByMSISDN(records, input);
            Logger::log("Searched by MSISDN: " + input);
            break;
        case 4:
            std::cout << "Enter Operator Code: ";
            std::cin >> input;
            searchEngine.searchByOperator(records, input);
            Logger::log("Searched by Operator Code: " + input);
            break;
        case 5:
            billingManager.exportReport("billing_report.txt");
            Logger::log("Exported billing report");
            break;
        case 6:
            settlementManager.exportReport("settlement_report.txt");
            Logger::log("Exported settlement report");
            break;
        case 0:
            Logger::log("Exited application");
            std::cout << "Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
        }
    } while (choice != 0);
}
