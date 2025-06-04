/*
7. First Non-Zero Digit in Secret Code
A code is considered valid only if its first non-zero digit from the left is even.
Write a program that extracts the first non-zero digit and checks if it's even.
*/

#include<iostream>



#include<iostream>
using namespace std;

int extractFirstNonZeroDigit(int num);

int main() {
	int code;
	cout << "Enter the code: ";
	cin >> code;

	int result = extractFirstNonZeroDigit(code);
	
	if (result) 
	{
		cout << "Valid code! The first non-zero digit is even." << endl;
	}
		
	else
	{
		cout << "Invalid code! The first non-zero digit is odd." << endl;
	}

	

	return 0;
}

int extractFirstNonZeroDigit(int num) {
	while (num > 0) {
		int digit = num % 10;
		if (digit != 0) {
			return digit % 2 == 0;
		}
		num /= 10;
	}
	return false;
	
}

/*int secretCode(int);
using namespace std;

int main()
{
	int code;

	cout << "Enter the code: ";
	cin >> code;
	cout << endl;
	int res=secretCode(code);
	cout << "result: " << res << endl;
	return 0;
}
int secretCode(int num)
{
	int tmp = num,count=0;
	CALL:
	while (tmp < 10)
	{
		tmp /= 10;
		count++;
	}
	if (tmp % 2 == 0 && tmp != 0)
		return tmp;
	else
	{
		while (count > 0)
		{
			tmp = tmp * 10;
		}
		tmp = num - tmp;
		goto CALL;
	}

}*/
