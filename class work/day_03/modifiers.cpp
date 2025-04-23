#include <iostream>


using namespace std;
class  test
{
	mutable int counter;
public:
	int count;
public:
	void update()const {
		counter++;
		count++;//cant access because its costant function
	}

};


int func(int);




int main() {
	int r = 100;
	int ret = func(r);





}


int func(int c)
{
	return 1000 + c;

}