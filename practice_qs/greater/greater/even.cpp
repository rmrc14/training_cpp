// find the even num between start range and end range

#include <iostream>

using namespace std;

int main()
{
	int start, end;
	cout << "enter the start and end range:" << endl;
	cin >> start >> end;

	if (start % 2)
		start += 1; 

	for (;start <= end;start += 2 )
	{
		cout << start << ' ';
	}
	/*
	for (;start <= end;start++)
	{
		if (start % 2 == 0)
			cout << start<<" ";
	}
	*/


	return 0;

}