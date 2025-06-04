
#include<list>
#include<iostream>
#include<Windows.h>
#include<string>
#include"Employee.h"


/*
void mySort(list<Employee>& l)
{
	//list<Employee> l1;
	
	for (auto it1 = l.begin(); it1 != l.end(); ++it1)  //goes through all the element 
	{
		auto it2 = it1;
		++it2;
		for (; it2 != l.end(); ++it2) // compares from the next element onwards
		{
			if (it1->getId() > it2->getId())
			{
				auto temp = *it1;
				*it1 = *it2;
				*it2 = temp;
			}


		}
	}
	
	
}
*/
// 2nd sort
/*
void mySort(list<Employee>& l)
{
	list<Employee> sorted; //our new list

	for (const auto& emp : l)
	{
		// Find position to insert `emp` in `sorted`
		auto pos = sorted.begin();  // points to start

		while (pos != sorted.end() && pos->getId() < emp.getId())
		{
			++pos;
		}

		// Insert emp at the correct sorted position
		sorted.insert(pos, emp);   //here every iteration the position is found
	}

	
	l.swap(sorted);
}
*/
//3rd sort
void mySort(list<Employee>& ls)
{
	for(auto& e:ls)
		for (auto& f : ls)
		{
			if (e.getId() < f.getId())
			{
				auto tmp = e;
				e = f;
				f = tmp;
			}
		}

}

int main()
{
	Employee e1(1, "alice"), e2(2, "bob"), e3(3, "charlie");

	list<Employee> l;
	l.push_back(e2);

	l.push_back(e1);
	
	l.push_back(e3);

	for (const auto& e : l)
		e.display();
	/*cout << "after removed:" << endl;
	l.remove(e2);

	for (const auto& e : l)
		e.display();*/

	cout << endl;
	cout << "sorted" << endl;

	try
	{

		mySort(l);
		for (const auto& e : l)
			e.display();
	}
	catch (exception& e)
	{
		cout << e.what();
	}

	return 0;
}