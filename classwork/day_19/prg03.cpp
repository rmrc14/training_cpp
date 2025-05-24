#include <iostream>

using namespace std;

int main()
{


	char line[] = "This is a cpp programming class";

	for (int i = 0;i < strlen(line);i++)
		cout << line[i];

	cout << endl;

	char* ptr = nullptr;
	ptr = line;
	
	cout << "using pointers: " << endl;

	while (*ptr != '\0')
	{
		cout << *ptr;
		ptr++;
	}

	return 0;

}