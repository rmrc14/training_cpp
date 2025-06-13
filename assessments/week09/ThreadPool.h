#pragma once

#include "CoreHeader.h"

class Thread
{
	std::mutex mtx;
	std::vector<std::thread> t_operator;
	std::vector<std::thread> t_customer;
	std::vector<CDR> tmpOperator;
	std::map<CDR> customer;

public:
	void execute(std::vector<CDR>);
	void billing();
	void customerBilling();
	void operatorBilling(std::vector<CDR>);
};

void Thread::customerBilling()
{
	std::vector<CDR> tmp = tmpOperator;
	CDR cdr;
	while (!tmp.empty())
	{
		cdr=*tmp.begin();
		tmp.erase(tmp.begin());

	}

}




void Thread::execute(std::vector<CDR> v)
{
	tmpOperator =v ;
	//std::unique_lock<std::mutex> lock(mtx);
	//CDR cdr;
	//for (auto& a : v)
	//{
	//	//t_operator.emplace(a);
	//	
	//}
	//for (auto& b : tmpOperator)
	//{

	//}


}