// ErrorHandler.cpp
#include "ErrorHandler.h"
#include <iostream>
void ErrorHandler::raise(const std::string& msg) {
    std::cerr << "Runtime Error: " << msg << "\n";
}
