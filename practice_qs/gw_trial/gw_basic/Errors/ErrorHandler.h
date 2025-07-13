// ErrorHandler.h
#pragma once
#include <string>

class ErrorHandler {
public:
    static void raise(const std::string& msg);
};
