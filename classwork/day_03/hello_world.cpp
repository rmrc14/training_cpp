#include<iostream>
#include<cstring>
using namespace std;



int main() {
	int _id = 0;
	int itr1=0, itr2=0;   // is used to store integer values

	char first_name[100] = { '/0' }, second_name[100] = { '/0' };
	
	memset(first_name, '/0', sizeof(first_name));
	strcat(first_name, "remin");
	register int i;
	for( i = 0; i < 10; i++)
			cout << i << " " << endl;

	bool  flag = true;
	

}