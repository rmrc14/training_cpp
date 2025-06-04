#pragma once

#include <iostream>   // for std::cerr
#include <fstream>    // for std::ofstream (file writing)
#include <string>     // for std::string
#include <iomanip>    // for std::setw, std::setfill, std::put_time
#include <chrono>     // for high-resolution time using std::chrono
#include <sstream>    // for std::ostringstream (building strings)


// Logging Levels
enum LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR
};

// Convert log level to string
std::string levelToString(LogLevel level) {
    switch (level) {
    case DEBUG: return "DEBUG";
    case INFO: return "INFO ";
    case WARNING: return "WARN ";
    case ERROR: return "ERROR";
    default: return "UNKNOWN";
    }
}

// Get current time in "YYYY-MM-DD HH:MM:SS.mmm" format using chrono
std::string getCurrentTime() {
    using namespace std::chrono;

    auto now = system_clock::now();
    auto in_time_t = system_clock::to_time_t(now);
    auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %H:%M:%S");
    oss << "." << std::setfill('0') << std::setw(3) << ms.count();
    return oss.str();
}

// Logger Class
class Logger {
    std::ofstream logFile;

public:
    Logger(const std::string& filename) {
        logFile.open(filename, std::ios::app);  // Append mode
        if (!logFile.is_open()) {
            std::cerr << "Failed to open log file\n";
        }
    }

    ~Logger() {
        if (logFile.is_open())
            logFile.close();
    }

    void log(LogLevel level, const std::string& message) {
        if (logFile.is_open()) {
            logFile << "[" << getCurrentTime() << "] "
                << "[" << levelToString(level) << "] "
                << message << std::endl;
        }
    }
   
};

