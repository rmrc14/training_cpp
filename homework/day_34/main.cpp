/*
write a c++ program involving employee details financial detail store the record in a file
print a record from a file update for an employee name
		read and write in binary
		collection
		storage
		printing
		update
		search

*/

#include<iostream>
#include<string>
#include<fstream>
#include<vector>


#include "Employee.h"
#include "Financial.h"

using namespace std;

void menu()
{
	cout << "Menu\n\t1. add\n\t2. update name\n\t3. search\n\t4. delete\n\t5. delete list\n"
		<< "\t6. display list\n\t7. update database\n\t0.Exit\n";
}


bool addEmployee(vector <Financial>& emp);
bool updateName(vector <Financial>& emp);
bool searchEmp(vector <Financial>& emp);
bool deleteEmp(vector <Financial>& emp);
bool deleteList(vector <Financial>& emp);
void displayList(vector <Financial>& emp);
bool updateDatabase(vector <Financial>& emp);
bool extractFromFile(vector <Financial>& emp);

int main()
{
	vector<Financial> empFin;

	// Load existing employee data from file
	if (!extractFromFile(empFin)) {
		cout << "Starting with an empty database.\n";
	}

	int opt;
	menu();

	do {
		cout << "\nEnter your option (11 to display menu): ";
		cin >> opt;

		switch (opt) {
		case 0:
			cout << "Exiting the program.\n";
			break;

		case 1:
			if (!addEmployee(empFin))
				cout << "Failed to add employee.\n";
			break;

		case 2:
			if (!updateName(empFin))
				cout << "Employee not found.\n";
			break;

		case 3:
			if (!searchEmp(empFin))
				cout << "Employee not found.\n";
			break;

		case 4:
			if (!deleteEmp(empFin))
				cout << "Employee not found.\n";
			break;

		case 5:
			if (!deleteList(empFin))
				cout << "Employee list is already empty.\n";
			else
				cout << "All employee records deleted.\n";
			break;

		case 6:
			displayList(empFin);
			break;

		case 7:
			if (updateDatabase(empFin))
				cout << "Database updated successfully.\n";
			else
				cout << "Failed to update the database.\n";
			break;

		case 11:
			menu();
			break;

		default:
			cout << "Invalid option. Please try again.\n";
			break;
		}

	} while (opt != 0);

	// Save employee records before exiting
	updateDatabase(empFin);

	return 0;
}

bool addEmployee(vector <Financial>& emp)
{
	double sal;
	char name[50];

	cout << "Enter the salary: ";
	cin >> sal;
	cin.ignore();  // Clear leftover newline

	cout << "Enter the name: ";
	cin.getline(name, 50);  // Read full name with spaces

	Financial e(name, sal);
	emp.push_back(e);

	cout << "Successfully added an employee\n";
	return true;
}


bool updateName(vector <Financial>& emp)
{
	int id;
	char name[50];

	cout << "Enter the id: ";
	cin >> id;
	cin.ignore();

	cout << "Enter the new name: ";
	cin.getline(name, 50);

	for (auto& e : emp)
	{
		if (e.getid() == id)
		{
			e.setName(name);
			cout << "Name updated successfully\n";
			return true;
		}
	}
	return false;
}


bool searchEmp(vector <Financial>& emp)
{
	int id = 0;
	cout << "Enter the id : "; cin >> id;

	for (auto& e : emp)
	{
		if (e.getid() == id)
		{
			e.display();
			return true;
		}
	}
	return false;
}

bool deleteEmp(vector <Financial>& emp)
{
	int id = 0;
	cout << "Enter the id : "; cin >> id;

	for (auto it = emp.begin(); it != emp.end(); it++)
	{

		if (it->getid() == id)
		{
			emp.erase(it);
			cout << "deleted employee successfully\n";
			return true;
		}
	
	}
	return false;
}

bool deleteList(vector <Financial>& emp)
{
	emp.clear();
	return true;
}

void displayList(vector <Financial>& emp)
{
	if (!emp.size())
	{
		cout << "List is empty\n";
		return;
	}
	int i = 0;

	for (auto it = emp.begin(); it != emp.end(); it++)
	{
		cout << ++i << "--\n";
		it->display();
	}
}

bool updateDatabase(vector <Financial>& emp)
{
	fstream file;
	file.open("file.txt", ios::out | ios::trunc|ios::binary);

	if (!file.is_open())
	{
		cerr << "Failed to open file\n";
		return false;
	}



	for (auto& e : emp)
	{
		
		file.write((char*)&e, sizeof(Financial));
		
	}

	file.close();
	return true;
}

bool extractFromFile(vector <Financial>& emp)
{
	fstream file("file.txt", ios::in | ios::binary);
	if (!file.is_open()) {
		cerr << "Failed to open file\n";
		return false;
	}

	Financial temp;
	while (file.read((char*)&temp, sizeof(Financial))) {
		emp.push_back(temp);
	}

	file.close();
	return true;
}



//int main()
//{
//	Financial f1("alice", 10000),f2("bob",12000),f3("charlie",13000),f4("dennis",14000);
//
//	vector <Financial> empFin;
//	empFin.push_back(f1);
//	empFin.push_back(f2);
//	empFin.push_back(f3);
//	empFin.push_back(f4);
//
//	ofstream fout;
//	fout.open("Employee.txt",ios::out|ios::binary);
//	if (!fout.is_open())
//	{
//		cerr << "error: could not open the file. ";
//	}
//	for (const auto &i : empFin) // readonly reference to i an object of empfin
//								// if we were to use i only it works only on a copy causing 
//								// an overhead
//
//		//reinterpret_cast is a type of C++ cast used to
//		//  convert one pointer type to another
//		//  without changing the actual binary data.
//	{
//		fout.write( (char*)&i, sizeof(Financial));
//		
//	}
//
//		/*In binary file operations (like ofstream or ifstream),
//		we need to read/write raw bytes. This means we must treat 
//		our variables as a char* (byte array), even though they 
//		may be int, double, or structs.*/
//	
//
//	
//	fout.close();
//	
//	ifstream fin;
//	fin.open("Employee.txt", ios::in | ios::binary);
//		if (!fin.is_open())
//		{
//			cerr << "error: could not open the file. read ";
//		}
//	for (const auto& i : empFin) 
//	{
//		fin.read((char*)&i, sizeof(Financial));
//
//	}
//	
//	/*Financial temp;
//	cout << "\nReading from file:\n";
//	while (fin.read(reinterpret_cast<char*>(&temp), sizeof(Financial))) {
//		temp.print();  
//	}
//
//	fin.close();*/
//
//
//	return 0;
//}