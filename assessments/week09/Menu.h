#pragma once

#include "CoreHeader.h"


class Menu {

public:
	void mainMenuEngine();
	void loginMenu();
	void CDR_Menu();
	void billMenu();
	void customerBillMenu();
	void operatorBillMenu();
};

void Menu::mainMenuEngine()
{
	int choice;
	bool flag = true;
	while(flag)
	{
		loginMenu();
		std::cin >> choice;
		switch (choice)
		{
		case 0: //sinup

			break;
		case 1: //login
			

			break;
		case 3: flag = false;
			break;
		default: std::cout << "unkown choice" << std::endl;
		}
	}

}


void Menu::loginMenu()
{
	std::cout << "1.sign up" << std::endl;
	std::cout << "2.login" << std::endl;
	std::cout << "3.exit" << std::endl;
}
void Menu::CDR_Menu()
{

	std::cout << "1.process cdr file" << std::endl;
	std::cout << "2.print/search for billing info" << std::endl;
	std::cout << "3.logout" << std::endl;

}
void Menu::billMenu()
{

	std::cout << "1.Customer billing" << std::endl;
	std::cout << "2.Interoperator settlement billing" << std::endl;
	std::cout << "3.back" << std::endl;

}
void Menu::customerBillMenu()
{

	std::cout << "1.search for MSSISDN no " << std::endl;
	std::cout << "2.print cb.txt" << std::endl;
	std::cout << "3.back" << std::endl;
}
void Menu::operatorBillMenu()
{
	std::cout << "1.search brand name / operator id " << std::endl;
	std::cout << "2.print iosb.txt" << std::endl;
	std::cout << "3.back" << std::endl;

}