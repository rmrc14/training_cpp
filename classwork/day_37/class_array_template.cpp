/*
develop a class for developing an stl container like array 
*/

#include<iostream>
#include<initializer_list>
#include<Windows.h>

using namespace std;


template <class T,size_t N >
class myArray
{
private:
	T *narr;
	size_t n;
public:
	~myArray() { delete[] narr; }
	myArray()
	{
		this->narr = new T[N];
	}
	myArray(std::initializer_list<T> list) {
		if (list.size() > N)
			throw std::length_error("Too many arguments");
		this->arr = new T[N];
		int i = 0;
		for (const T& val : list) {
			arr[i++] = val;

		}
		//for remaining elements initialze to default value of the datatype
		for (;i < N;i++)
			arr[i] = T{};
	}
	T* begin()
	{
		return narr;
	}
	
	
	T& front()
	{
		return narr[0];
	}

	T* end()
	{
		return narr+n;
	}
	void fill(const T val)
	{
		for (size_t i = 0;i < n;i++)
			narr[i] = val;
	}
	size_t size()const
	{
		return n;
		
	}
	void display()
	{
		for (int i = 0;i < N;i++)
			cout << arr[i] << endl;
	}
};


int main()
{
	/*myArray<float, 10> arr;

	std::cout << arr.size() << std::endl;*/

	myArray<float, 10> arr;

	arr.fill(3.14f);
	cout << "Array size: " << arr.size() << "\n";
	cout << "Front: " << arr.front() << "\n";
	

	for (auto it = arr.begin(); it != arr.end(); ++it) {
		cout << *it << " ";
	}
	cout << "\n";

	try {
		myArray<int, 5> arr1 = { 1,2,3 };
		arr1.display();
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

	return 0;
}