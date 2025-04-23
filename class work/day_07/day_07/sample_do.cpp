// sample do while -- no of cart items a discount is added 
#include<iostream>

#define	MONEY 4000
using namespace std;



int main()
{
	int loginattempts = 0;
	int wallet = MONEY;
	int item = 0, cart=0;

	cout << "amount user have in wallet";
	cin >> wallet;// do money decrement
	do {
		
		cout << "are there item to be added to the cart-- item to be purchased(0/1) " << endl;
		cin >> item;
		if (item == 1 )
		{
			cart++;
			cout << "min item value of 3 or more a discount of 10 % is given" << endl;

		}

	} while (item==1);

	if (cart >= 3)
		cout << "scince you have purchased " << cart << " you have been allocated a discount of 10% to all your purchases";

	return 0;

}