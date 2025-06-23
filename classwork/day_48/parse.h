#pragma once


#include "Customer.h"

class ParseCdr
{
	std::ifstream fin;
	std::vector<Customer> v_customer;
	
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
	std::vector<Customer> getCdrInstr() { return v_customer; }


	void seperateCustomer();
};



//---------------------------  display -----------------
void ParseCdr::displayCdrQueu()
{
	for (auto& e : v_customer)
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


		for (char& e : line)  
		{
			if (e == '|')
			{
				e = ' ';

			}
		}
		std::istringstream iss(line);
		Customer c;


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
		v_customer.push_back(c);

	}
}