

/*


6.Write a Program to Print Check Whether a Character is an Alphabet or Not



*/
#include <iostream>
#include<cctype>
void alpha(char);

using namespace std;

int main()
{
	char a;
	cin >> a;

	alpha(a);


	return 0;

}

void alpha(char ch)
{
	
	if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
		{
			cout << "alphabet";
		}
		else
		{
			cout << "not alphabet";
		}
	
	

}