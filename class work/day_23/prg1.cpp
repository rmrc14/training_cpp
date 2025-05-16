#include <iostream>

using namespace std;

int main()
{

	int* ptr = (int*)malloc(sizeof(int) * 3);
	int *tmp = ptr;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;
	ptr++;
	cin >> *ptr;


	ptr = tmp;
	for (int i = 0;i < 3;i++)
	{
		cout << *ptr++<<" ";
	}
	ptr = tmp;
	free(ptr);

	return 0;

}

