#include<iostream>
using namespace std;
int main() 
{
	char line[] = "This is CPP Programming class";
	char ch = 'g';
	unsigned long int BAl=0, BAr = 0;
	cout << "BA line : " << (unsigned long int)line<<endl;
	BAl = (unsigned long int)line;


	char* res = strchr(line, ch);

	if (res != nullptr)
	{
		cout << "\t" << res << endl;
		cout << "BA line : " << (unsigned long int)res << endl;
	}
	else
		cout << "the charac not found" << endl;

	char substr[] = "is";

	char* res1 = strstr(line, substr);

	if (res1 != nullptr)
		cout << "\t" << res1 << endl;
	else
		cout << "the charac not found" << endl;


	return 0;



}