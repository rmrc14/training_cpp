#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<chrono>
#include<iomanip>
#include <exception>  
#include<queue>
#include<set>
#include<map>
#include<condition_variable>

typedef unsigned long int ull;

struct CDR {

	unsigned long int MSSISDN, Operator_MMC_MNC, Third_party_MSISDN, Third_party_operator_MMC_MNC;

	unsigned int Duration, Download, Upload;

	std::string Operator_Brand_Name, Call_type;

	void display()
	{
		std::cout << MSSISDN << "|";
		std::cout << Operator_Brand_Name << "|";
		std::cout << Operator_MMC_MNC << "|";
		std::cout << Call_type << "|";
		std::cout << Duration << "|";
		std::cout << Download << "|";
		std::cout << Upload << "|";
		std::cout << Third_party_MSISDN << "|";
		std::cout << Third_party_operator_MMC_MNC << std::endl;

	}
};