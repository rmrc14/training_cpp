#include <iostream>

using namespace std;


int main()
{
	int phoneChrge,mobileStatus;
	cout << " mobile status if its on : 0/1"<<endl;
	cin >> mobileStatus;



	

	if (mobileStatus == true)
	{
		cout << "enter the charge of the phone :" << endl;
		cin >> phoneChrge;

		if (phoneChrge <= 10)
			cout << "you have to plug the phone to continue to use it" << endl;

		cout << "if phone is on :" << endl;
		cout << "if phone is on : browsing apps" << endl;
		cout << "if phone is on : watching movies" << endl;
		cout << "if phone is on : reading news articles" << endl;
	}
	else
	{
	
		cout << "powering on the mobile" << endl;
		mobileStatus = 1;
		cout << "check charge of the phone" << endl;
		cin >> phoneChrge;
		if (phoneChrge <= 10)
			cout << "you have to plug the phone to continue to use it" << endl;

		cout << "if phone is on :" << endl;
		cout << "if phone is on : browsing apps" << endl;
		cout << "if phone is on : watching movies" << endl;
		cout << "if phone is on : reading news articles" << endl;
	}



	return 0;
	
}