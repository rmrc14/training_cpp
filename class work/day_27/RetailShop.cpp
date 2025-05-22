#include "RetailShop.h"
#include<iostream>
#include<string.h>
#include<string>
using namespace std;


void RetailShop::display(ITEM i)
{
	cout << "==========================" << endl;
	cout << endl;
	cout << "product name: \t" << i.p_name << "\t"
		<< "product price: \t" << i.p_price << endl;
	cout << endl;
	cout << "========================" << endl;

}

int RetailShop::edit(ITEM* i, float pr, char* name)
{
	i->p_price = pr;
	strcpy(i->p_name, name);

}

bool RetailShop::searchName(char* name, ITEM i)
{
	if (strcmp(name, i.p_name) == 0)
		return true;


	return false;

}

float RetailShop::calcTax()
{
	return total_item_tax = (item_totalSum * 7) / 100;

}


int RetailShop::addItem(ITEM* i, float pr, char* name)
{
	i->p_price = pr;
	strcpy(i->p_name, name);



	return EXIT_SUCCESS;
}