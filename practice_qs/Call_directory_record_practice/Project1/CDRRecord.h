// CDRRecord.h
#ifndef CDR_RECORD_H
#define CDR_RECORD_H

#include <string>

struct CDRRecord {
    std::string msisdn;
    std::string operatorName;
    std::string operatorCode;
    std::string callType;
    int duration = 0;
    double uploadMB = 0.0;
    double downloadMB = 0.0;
    std::string thirdPartyMsisdn;
    std::string thirdPartyCode;
};

#endif
