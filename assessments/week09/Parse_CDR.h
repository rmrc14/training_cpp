#pragma once

#include "CoreHeader.h"


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
	std::vector<CDR> getCdrInstr() { return vCdr; }
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
		
			
			for (char& e : line)  // replaces the |  with a wspace for stringstream
			{
				if (e == '|')
				{
					e = ' ';

				}
			}
			std::istringstream iss(line);
			CDR c;


			iss >> c.MSSISDN >> c.Operator_Brand_Name >> c.Operator_MMC_MNC >> c.Call_type
				>> c.Duration >> c.Download >> c.Upload;
			
			if ((c.Call_type == "GPRS"))
			{
				iss >> c.Third_party_operator_MMC_MNC;
			}
			else
			{
				iss >> c.Third_party_MSISDN
					>> c.Third_party_operator_MMC_MNC;
			}			

		// pushes the value to a queue
		vCdr.push_back(c);

	}
}