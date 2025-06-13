#pragma once

#include "CoreHeader.h"



class ParseCdr
{
	std::ifstream fin;

public:
	ParseCdr(std::string filename)
	{
		fin.open(filename);
		if (!fin.is_open())
			throw std::runtime_error("Unable to open the file : " + filename);

	}
	~ParseCdr()
	{
		if (fin.is_open())
			fin.close();
	}

	void parse()
	{

		std::string line;
		while (getline(fin, line))
		{
			//1037928|Jio|42502|SMS-MT|0|0|0|1136404|42504
// 1. MSSISDN | Operator_Brand_Name | 	Operator_MMC_MNC| Call_type
			


		}


	}
};