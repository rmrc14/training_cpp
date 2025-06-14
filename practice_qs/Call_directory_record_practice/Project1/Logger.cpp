// Logger.cpp
#include "Logger.h"
#include <fstream>
#include <chrono>
#include <ctime>

void Logger::log(const std::string& message) {
    std::ofstream fout("log.txt", std::ios::app);
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    fout << std::ctime(&now) << " - " << message << "\n";
}
