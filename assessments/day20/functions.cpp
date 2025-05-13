#include "libmgt.h"




int menuDisplay(void)
{
	int choice;
	cout << "\t0.\t listing books " << endl;
	cout << "\t1.\tsearch " << endl;
	cout << "\t2.\t returning book " << endl;
	cout << "\t3.\t renting " << endl;
	cout << "\t4.\t deletion " << endl;
	cout << "\t5.\t updating " << endl;
	cout << "\t6.\t adding " << endl;
	cout << "\t7.\t exit () " << endl;
	cin >> choice;
	return choice;
}