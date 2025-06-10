#include<vector>
#include<iostream>
#include<iterator>
#include<string>
#include<list>
#include<fstream>


using namespace std;
class Employee
{

	int id;
	string name;
public:
	Employee():id(0),name(""){}
	Employee(int id ,string name):id(id),name(name) {}
	Employee(const Employee& other){ 
		this->id = other.id;
		this->name = other.name;
	}

	string getName() const{ return name; }
	int getId()const { return id; }

	void setName(const string& name) { this->name = name; }
	void setId(int id) { this->id = id; }
	void disp()const
	{
		cout << id << " " << name << endl;
	}
	friend istream& operator>>(istream& is, Employee& e);
	friend ostream& operator <<(ostream& is, Employee& e);
};

// Overload input operator for Employee
istream & operator >>(istream& is, Employee& e) 
{
	int id; string name;
	is >> id >> name;
	e.setId(id);
	e.setName(name);
	return is;
}
ostream& operator <<(ostream& os, Employee& e)
{
	
	os <<" id: "<<e.id <<"\tname: "<< e.name<<endl;
	
	return os;
}

int main()
{
	vector<Employee> emp;
	istream_iterator<Employee> inIt(std::cin);
	istream_iterator<Employee> endIt;

	while (inIt != endIt)
	{
		emp.emplace_back(*inIt);
		++inIt;
	}

	for (auto e : emp)
	{
		//e.disp();
		cout << e;
	}

	cin.ignore();
	int n;
	cin >> n;
	cout<<"number" << n << endl;
	cout << "\n list \n";
	list<Employee> elist;
	istream_iterator<Employee> inIt1(std::cin);
	istream_iterator<Employee> endIt2;

	while (inIt1 != endIt2)
	{
		elist.push_back(*inIt1);
		inIt1++;
	}

	for (auto e : elist)
	{
		//e.disp();
		cout << e;
	}


	return 0;
}