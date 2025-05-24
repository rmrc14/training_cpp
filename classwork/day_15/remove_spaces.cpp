#include <iostream>
#define MAX 100

void remSpace(char*);
using namespace std;

int main()
{
	char ch[MAX]="he ll o w o r l d";

	remSpace(ch);

	return 0;
}
void remSpace(char* ch)
{
	char tmp[MAX];
	//int size = strlen(ch);
	int j = 0;
	int i = 0;
	while (ch[i] != '\0')
	{
		if (!(ch[i] == ' '))
		{
			tmp[j] = ch[i];
			j++;
		}
		i++;
	}
	tmp[j] = '\0';

	cout << tmp;




}