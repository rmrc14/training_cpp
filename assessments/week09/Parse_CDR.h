#pragma once

#include "CoreHeader.h"
#include "Customer.h"
#include "Operator.h"

class ParseCdr
{
	std::ifstream fin;

	std::vector<CDR> vCdr;

	std::vector<Customer> v_customer;
	std::vector<Operator> o_operator;

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


	void seperateCustomer();
};

void ParseCdr::seperateCustomer()
{
	for (auto& a : vCdr)
	{
		Customer c;
		// for msg
		if (a.Operator_MMC_MNC == a.Third_party_operator_MMC_MNC)
		{
			if(a.Call_type=="SMS-MT")
			{
				c.setIncoming_SMS_messages_w(c.getIncoming_SMS_messages_w() + a.Duration);
			}
			else if (a.Call_type == "SMS-MO")
			{
				c.setOutgoing_SMS_messages_w(c.getOutgoing_SMS_messages_w() + a.Duration);
			}
			// for call
			else if (a.Call_type == "MTC")
			{
				c.setIncoming_voice_call_durations_w(c.getIncoming_voice_call_durations_w() + a.Duration);
			}
			else if (a.Call_type == "MOC")
			{
				c.setOutgoing_voice_call_durations_w(c.getOutgoing_voice_call_durations_w() + a.Duration);
			}
			// for data
			else if (a.Call_type == "GPRS")
			{
				c.setDownloaded_w(c.getDownloaded_w() + a.Download);
				c.setUploaded_w(c.getUploaded_w() + a.Upload);
			}


		}
		else
		{
			if (a.Call_type == "SMS-MT")
			{
				c.setIncoming_SMS_messages_o(c.getIncoming_SMS_messages_o() + a.Duration);
			}
			else if (a.Call_type == "SMS-MO")
			{
				c.setOutgoing_SMS_messages_o(c.getOutgoing_SMS_messages_o() + a.Duration);
			}
			else if (a.Call_type == "MTC")
			{
				c.setIncoming_voice_call_durations_o(c.getIncoming_voice_call_durations_o() + a.Duration);
			}
			else if (a.Call_type == "MOC")
			{
				c.setOutgoing_voice_call_durations_o(c.getOutgoing_voice_call_durations_o() + a.Duration);
			}
			else if (a.Call_type == "GPRS")
			{
				c.setDownloaded_o(c.getDownloaded_o() + a.Download);
				c.setUploaded_o(c.getUploaded_o() + a.Upload);
			}

			v_customer.push_back(c);
		}

	}

	// operator 





}


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