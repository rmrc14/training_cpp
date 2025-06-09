
#include <iostream>
#include <string>
using namespace std;
class badLengthException
{
	int size;
public:
	badLengthException(int n):size(n){}
	int what(){return size;}

};

bool checkUserName(string name)
{
	bool isValid = true;
	int n = name.length();
	if (n < 5)
		throw badLengthException(n);
	for (int i = 0;i < n - 1;i++)
	{
		if (name[i] == 'w' && name[i + 1] == 'w')
			isValid = false;
	}
	return isValid;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string username;
		cin >> username;
		try
		{
			bool isValid = checkUserName(username);
			if (isValid)
				cout << "valid";
			else
				cout << "not valid";
		}
		catch (badLengthException e)
		{
			cout << "length too short: " << e.what();
		}
	}





	return 0;
}