#include <iostream>

#define MAX 100
bool is_alpha(char);
using namespace std;

int main()
{
	char ch[MAX];
	//char tmp[MAX] = { 0 };
	char tmp[MAX];
	memset(tmp, '\0', MAX);

	cin.getline(ch,MAX);
	int i = 0,j= 0;
	while (ch[i] != '\0')
	{
		if (!(is_alpha(ch[i])))
			tmp[j++] = ch[i];
	
			i++;
	}
	tmp[i] = '\0';
	//for(int j=0;j<strlen(tmp);j++)
//	cout << tmp[i];
	cout << tmp;
	return 0;

}
//This is cpp programming class
bool is_alpha(char ch)
{

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return true;
	else
		return false;

}