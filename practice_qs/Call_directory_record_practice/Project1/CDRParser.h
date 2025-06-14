// CDRParser.h
#ifndef CDR_PARSER_H
#define CDR_PARSER_H

#include <vector>
#include <string>
#include "CDRRecord.h"

class CDRParser {
public:
    std::vector<CDRRecord> parseFile(const std::string& filename);
};

#endif
