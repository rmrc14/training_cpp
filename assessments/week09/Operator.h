#pragma once

#include "CoreHeader.h"

/*
Operator Brand: Cellcom (42500)
	Incoming voice call durations: 844736
	Outgoing voice call durations: 874157
	Incoming SMS messages: 4000
	Outgoing SMS messages: 3990
	MB downloaded: 408486 | MB uploaded: 416108

*/

class Operator
{
	std::string Operator_Brand;
	ull id;
	int Incoming_voice_call_durations;// : 844736
	int Outgoing_voice_call_durations;// : 874157
	int Incoming_SMS_messages;// : 4000
	int Outgoing_SMS_messages;// : 3990
	int downloaded;
	int uploaded;//: 416108
	


};