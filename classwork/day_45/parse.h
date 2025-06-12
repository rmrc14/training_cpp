#pragma once

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>




class task
{
	std::string task_name;
	int time;
public:
	std::string getTname() { return task_name; }
	int getTime() { return time; }

	void setTname(std::string n) { task_name = n; }
	void setTime(int t) { time = t; }

	void execute() { std::this_thread::sleep_for(std::chrono::seconds(this->time)); }

};

class Parse
{

	std::ifstream file;
	std::string line;
	int cpuNo;

	std::vector<task> vTask;


public:
	Parse(std::string filename):cpuNo(1)
	{
		file.open(filename);
		if (!file.is_open())
			throw std::runtime_error("unable to open the file " + filename);
		while (std::getline(file, line))
		{
			commandParsing(line);
		}

	}
	~Parse()
	{
		if(file.is_open())
		 file.close();
	}

	void commandParsing(std::string);
	std::vector<task> getTask() { return vTask;}
	int getcpunum() { return cpuNo; }

	void print()
	{
		std::cout << "cpu: " << cpuNo<<std::endl;
		for (auto a : vTask)
		{
			std::cout << a.getTname() << " " << a.getTime() << std::endl;
		}
	}
};



void Parse::commandParsing(std::string line)
{
	task t;
	std::istringstream iss(line);

	std::string nametask, garbage;
	static int n = 0;

	if(n == 0)
	{
		iss >> garbage >> cpuNo;
		n = 1;
	}
	else
	{
		int time1;

		iss >> nametask >> garbage >> time1;
		t.setTime(time1);

		t.setTname(nametask.substr(0, nametask.find_last_of(':')));

		vTask.push_back(t);
	}


}
