//#pragma once

#ifndef  __RETAILSHOP__
	
#define	__RETAILSHOP__

#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class RetailShop
{
	private:
		typedef struct Item
		{
			float p_price;
			char p_name[20];
		}ITEM;

		float item_totalSum;
		float total_item_tax;

		float calcTax();

	public:
		

		void display(ITEM);
		
		int addItem(ITEM*,float,char*);
		bool searchName(char*,ITEM);
		int edit(ITEM*,float,char*);

		// set the item

};








#endif