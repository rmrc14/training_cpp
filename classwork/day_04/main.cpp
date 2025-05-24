#include <iostream>
#include "string_handling.h"

//#define maxvalue 100

using namespace std;

typedef struct users {

	int _id;
	int userType;
	string userName;
}USERS;

void dispMenuAU();
void dispMenuNU(string);

int main()//int main(int argc, char *argv[])  // c++ main can accept comand line arguments *argv is 2d array 
{
	USERS u;
	cout << "enter id";
	cin >> u._id;
	cout << "enter userType (0/1)";
	cin >> u.userType;
	cout << "enter user name: ";
	cin >> u.userName;
	if(u.userType<<0)
	{
		dispMenuAU();
	}
	else 
	{
		dispMenuNU(u.userName);
	}







	/*int unusedCap = 0, capcurrent;

	cout << "enter the used capacity value : " << endl;
	cin >> capcurrent;
	unusedCap = maxvalue - capcurrent;

	if (unusedCap == 0)
	{
		cout << "the storage is full "<<endl;
		return 0;
	}
	cout << "you can add item to the storage "<<endl;
		//string_handling();
		//enumhandling();
		//cout << argc << endl;
		/*
		cout << "argv [0]" << argv[0] << endl;
		cout << "argv [1]" << argv[1] << endl;
		cout << "argv [2]" << argv[2] << endl;
		cout << "argv [3]" << argv[3] << endl;

		for (int i = 1; i < argc;i++)
		{
			cout << "argv[" << i << "]" << argv[i] << endl;

			/*int res = atoi(argv[1]) + atoi(argv[2]);//argument to int string passed should be numeric constant
			cout << "res= " << res << endl;
		cout << argv[1] << endl;//string + so it contains null character
		cout << argv[2] << endl;
		cout << argv[3] << endl;

		cout << argv[1][0] << endl;

		int res = 0;

			switch (argv[1][0])
			{
				case '+':
					res= atoi(argv[2])+atoi(argv[3]);
					cout << res;
					break;
				case '-':
					res= atoi(argv[2]) - atoi(argv[3]);
					cout << res;
					break;
				case'/':
					res= atoi(argv[2]) / atoi(argv[3]);
					cout << res;
					break;
				default :
					cout << "not valid  " << endl;
					break;

			}*/





		return 0;

	
}

void dispMenuAU()

{
	cout << "hisia";

}
void dispMenuNU(string) {
	cout << "asdjis";
}