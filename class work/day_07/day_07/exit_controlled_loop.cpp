
/* 
	Todays class work exit controlled loop -- do while looping .

   
   */


#include <iostream>
using namespace std;
#define MAXBITE 5

void display1();  //do while example
void display2();  //taste
//void display3();
//void display4();



int main()
{
	cout << "do while example :" << endl;
	display1();
	cout << "taste :" << endl;
	display2();
	/*cout << "quest 3--- solution of q3 :" << endl;
	display3();
	cout << "quest 3--- solution of q4 :" << endl;
	display4();
	cout << "quest 3--- solution of q5 :" << endl;
	*/

	return 0;
}

void display1()
{

	
	int i = 0;
	
	do
	{
		cout << i++ << endl;

	} while (i < 5);


}

void display2()
{
	int taste = 0;
	int plateEmpty = MAXBITE;

	do {
		cout << "have a bite of the food"<<endl;

		plateEmpty--;
		cout << "how is the taste of the food (0/1): ";
		cin >> taste;


	} while ((taste > 0) && (plateEmpty > 0));

	if (plateEmpty == 0)
		cout << "person stopped eating after the plate was empty" << endl<<"taste was good";
	if (taste == 0)
	{
		cout << "person stopped eating after " << plateEmpty << " bites because it was not good enough";

	}
		

}