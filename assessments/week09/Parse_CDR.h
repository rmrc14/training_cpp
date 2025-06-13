#pragma once

#include "CoreHeader.h"

struct CDR{

	unsigned long int MSSISDN, Operator_MMC_MNC, Third_party_MSISDN,Third_party_operator_MMC_MNC;

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
		std::cout << Third_party_operator_MMC_MNC << "|"<<std::endl;

	}
};



class ParseCdr
{
	std::ifstream fin;

	std::vector<CDR> vCdr;

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

	void parse();
	void displayCdrQueu();
};


//---------------------------  display -----------------
void ParseCdr::displayCdrQueu()
{
	for (auto& e : vCdr)
	{
		e.display();
	}
}

// -------------------------- parsing ---------------------

void ParseCdr::parse()
{

	std::string line;

	while (getline(fin, line))
	{
		//1037928|Jio|42502|SMS-MT|0|0|0|1136404|42504
// 1. MSSISDN | Operator_Brand_Name | 	Operator_MMC_MNC| Call_type |Duration|
			//	Download|	Upload|Third_party_MSISDN|	Third_party_operator_MMC_MNC
		std::istringstream iss(line);
		CDR c;
		// there are empty space after space then change the value to 0
		if (line.find("GPRS") )
		{
			for (auto& e : line)  // replaces the |  with a wspace for stringstream
			{
				if (e == '|')
				{
					e = ' ';
				}
			}


			iss >> c.MSSISDN >> c.Operator_Brand_Name >> c.Operator_MMC_MNC >> c.Call_type
				>> c.Duration >> c.Download >> c.Upload;

			c.Third_party_operator_MMC_MNC = line.find_first_not_of(" \t");

		}
		else
		{
			for (auto& e : line)  // replaces the |  with a wspace for stringstream
			{
				if (e == '|')
				{
					e = ' ';
				}
			}


			iss >> c.MSSISDN >> c.Operator_Brand_Name >> c.Operator_MMC_MNC >> c.Call_type
				>> c.Duration >> c.Download >> c.Upload >> c.Third_party_MSISDN
				>> c.Third_party_operator_MMC_MNC;

		}

		// pushes the value to a queue
		vCdr.push_back(c);

	}
}