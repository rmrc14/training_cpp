#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <chrono>
#include <fstream>
#include <exception>  // for std::exception

enum LogLevel
{
    INFO,
    DEBUG,
    WARNING,
    ERROR
};

std::string levelToString(LogLevel level)
{
    switch (level)
    {
    case INFO: return "INFO";
    case DEBUG: return "DEBUG";
    case WARNING: return "WARNING";
    case ERROR: return "ERROR";
    default: return "UNKNOWN";
    }
}

std::string getCurrentTime()
{
    using namespace std::chrono;
    auto now = system_clock::now();
    auto in_time_t = system_clock::to_time_t(now);
    auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %H:%M:%S");
    oss << "." << std::setfill('0') << std::setw(3) << ms.count();
    return oss.str();
}

class Logger
{
    std::ofstream logFile;

public:
    Logger(const std::string& filename)
    {
        try
        {
            logFile.open(filename, std::ios::out | std::ios::app);
            if (!logFile.is_open())
            {
                std::cerr << "Unable to open log file: " << filename << std::endl;
            }
        }
        catch (const std::exception& e)
        {
            std::cerr << "Exception while opening log file: " << e.what() << std::endl;
        }
    }

    ~Logger()
    {
        try
        {
            if (logFile.is_open())
                logFile.close();
        }
        catch (const std::exception& e)
        {
            std::cerr << "Exception while closing log file: " << e.what() << std::endl;
        }
    }

    void log(LogLevel level, std::string& message)
    {
        try
        {
            if (logFile.is_open())
            {
                logFile << "[" << getCurrentTime() << "]\t"
                    << "[" << levelToString(level) << "] "
                    << message << std::endl;
            }
            else
            {
                std::cerr << "Log file not open. Message: " << message << std::endl;
            }
        }
        catch (const std::exception& e)
        {
            std::cerr << "Logging failed: " << e.what() << std::endl;
        }
    }
};
