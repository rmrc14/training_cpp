#pragma once

#include<string>
#include<fstream>
#include<iostream>
#include<chrono>
#include<iomanip>
#include <sstream>

enum LogLevel
{
	ERROR,
	WARNING,
	DEBUG,
	INFO
};

//converts log level enum val to string 
std::string levelToString(LogLevel level)
{
	switch (level)
	{
	case  ERROR: return "ERROR";
	case WARNING: return "WARNING";
	case DEBUG: return "DEBUG";
	case INFO: return "INFO";
	default:
		return "UNKNOWN";
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
		logFile.open(filename, std::ios::app);
		if(!logFile.is_open())
			std::cerr<<"Failed to open log file\n";
	}
	~Logger()
	{
		if(logFile.is_open())
			logFile.close();
	}
	void log(LogLevel level, const std::string& message)
	{
		if (logFile.is_open()) {
			logFile << "[" << getCurrentTime() << "]"
				<< "[" << levelToString(level) << "]"
				<< message << std::endl;
		}


	}
};