
#include<iostream>
#include<memory>

using namespace std;


class Employee {

	int id;
	string name;
public:
	Employee(int id ,string name):id(id),name(name)
	{}
	void display() { cout << "id " << id << " name:" << name << endl; }
};

int main()
{

	int tmp = 5;
	//unique_ptr<Employee> p1(new Employee(101,"ello"));
	unique_ptr<Employee> p1(new Employee(101, "ello"));

	p1->display();

	unique_ptr<Employee> p2;
	p2 = move(p1);

	p2->display();


	return 0;
}
