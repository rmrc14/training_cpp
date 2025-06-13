#pragma once
#include "CoreHeader.h"

class Customer
{
	std::set<Customer> c;
	
	unsigned long int MSSISDN,Operator_MMC_MNC; // country code;
	std::string Operator_Brand_Name;
	
	//within operator
	int Incoming_voice_call_durations_w; 
	int Outgoing_voice_call_durations_w;
	int Incoming_SMS_messages_w;
	int Outgoing_SMS_messages_w;
	// outside operator
	int Incoming_voice_call_durations_o;
	int Outgoing_voice_call_durations_o;
	int Incoming_SMS_messages_o;
	int Outgoing_SMS_messages_o;

	//internet use
	int downloaded;
	int uploaded;

	

public:
	Customer()
	{
		MSSISDN = 0;
		Operator_MMC_MNC = 0; 
		Operator_Brand_Name="";

		//within operator
		 Incoming_voice_call_durations_w=0;
		 Outgoing_voice_call_durations_w=0;
		 Incoming_SMS_messages_w=0;
		 Outgoing_SMS_messages_w=0;
		// outside operator
		 Incoming_voice_call_durations_o=0;
		 Outgoing_voice_call_durations_o=0;
		 Incoming_SMS_messages_o=0;
		 Outgoing_SMS_messages_o=0;

		//internet use
		 downloaded=0;
		 uploaded=0;

	}
	~Customer(){}
	void dispCustomer();

	//getters
	int getIncoming_voice_call_durations_w() {return Incoming_voice_call_durations_w;}
	int getOutgoing_voice_call_durations_w() { return Outgoing_voice_call_durations_w; }
	int getIncoming_SMS_messages_w() {return Incoming_SMS_messages_w; }
	int getOutgoing_SMS_messages_w() { return Outgoing_SMS_messages_w; }
	int getDownloaded_w() {return downloaded ; }
	int getUploaded_w() { return uploaded ; }
	//getters outgoing
	int getIncoming_voice_call_durations_o(){ return Incoming_voice_call_durations_o; }
	int getOutgoing_voice_call_durations_o(){ return Outgoing_voice_call_durations_o; }
	int getIncoming_SMS_messages_o(){ return Incoming_SMS_messages_o; }
	int getOutgoing_SMS_messages_o(){ return Outgoing_SMS_messages_o; }
	int getDownloaded_o() { return downloaded; }
	int getUploaded_o() { return uploaded; }


	//setters
	void  setIncoming_voice_call_durations_w(int n) {  Incoming_voice_call_durations_w=n; }
	void setOutgoing_voice_call_durations_w(int n) {  Outgoing_voice_call_durations_w = n; }
	void setIncoming_SMS_messages_w(int n) {  Incoming_SMS_messages_w = n; }
	void setOutgoing_SMS_messages_w(int n) {  Outgoing_SMS_messages_w = n; }
	void setDownloaded_w(int n) { downloaded = n; }
	void setUploaded_w(int n) { uploaded = n; }
	// outgoing
	void setIncoming_voice_call_durations_o(int n) {  Incoming_voice_call_durations_o = n; }
	void setOutgoing_voice_call_durations_o(int n) {  Outgoing_voice_call_durations_o = n; }
	void setIncoming_SMS_messages_o(int n) {  Incoming_SMS_messages_o = n; }
	void setOutgoing_SMS_messages_o(int n) {  Outgoing_SMS_messages_o = n; }
	void setDownloaded_o(int n) { downloaded = n; }
	void setUploaded_o(int n) { uploaded = n; }

};


void Customer::dispCustomer()
{
	std::cout << "Customer ID:" << MSSISDN << "(" << Operator_Brand_Name << ")" << std::endl;
	std::cout<<"\tServices within the mobile operator *"<<std::endl;
	std::cout << "\tIncoming voice call durations: "<< Incoming_voice_call_durations_w << std::endl;
	std::cout << "\tOutgoing voice call durations: "<< Outgoing_voice_call_durations_w << std::endl;
	std::cout << "\tIncoming SMS messages: "<< Incoming_SMS_messages_w << std::endl;
	std::cout << "\tOutgoing SMS messages: "<< Outgoing_SMS_messages_w << std::endl;
	std::cout << "\t* Services outside the mobile operator *" << std::endl;
	std::cout << "\tIncoming voice call durations: " << Incoming_voice_call_durations_o << std::endl;
	std::cout << "\tOutgoing voice call durations: " << Outgoing_voice_call_durations_o << std::endl;
	std::cout << "\tIncoming SMS messages: " << Incoming_SMS_messages_o << std::endl;
	std::cout << "\tOutgoing SMS messages: " << Outgoing_SMS_messages_o << std::endl;
	std::cout << "\t* Internet use *" << std::endl;
	std::cout << "\tMB downloaded: "<< downloaded <<" | " <<"MB uploaded : "<< uploaded
	<<std::endl;

}
