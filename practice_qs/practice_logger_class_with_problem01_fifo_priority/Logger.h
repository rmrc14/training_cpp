#pragma once

#include<fstream>
#include<string>
#include<iostream>
#include <chrono>
#include<sstream>
#include<iomanip>

std::string getCurrentTime()
{
	using namespace std::chrono;
	auto now = system_clock::now();
	auto in_time_t = system_clock::to_time_t(now);
	auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

	std::ostringstream oss;

	oss << std::put_time(std::localtime(&in_time_t), " % Y - % m - % d % H: % M : % S");
	oss << "." << std::setfill("0") << std::setw(3) << ms.count();
	return oss.str();
}

std::string levelToString(LoggerLevel level)
{
	switch (level)
	{
	case INFO:return "INFO";
	case DEBUG:return "DEBUG";
	case WARNING:return "WARNING";
	case ERROR:return "ERROR";
	default: return "UNKNOWN";
	}

}

enum LoggerLevel
{
	INFO,
	WARNING,
	DEBUG,
	ERROR
};



class Logger
{
	std::ofstream fout;
public:
	Logger(const std::string& filename)
	{
		fout.open(filename, std::ios::app);
		if (!fout.is_open())
			std::cerr << "log file unable to open" << std::endl;
	}
	~Logger()
	{
		if (fout.is_open())
			fout.close();
	}
	void log(LoggerLevel level, const std::string& message)
	{
		if (fout.is_open())
		{
			fout << "[" << getCurrentTime << "]" << "[" << levelToString(level) << "]"
				<< message << std::endl;
		}
	}

};