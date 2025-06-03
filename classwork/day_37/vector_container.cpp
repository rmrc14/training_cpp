#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student
{
    int id;
    string name;
public:
    Student(int id,string name):id(id),name(name)
    {}
    void display()
    {
        cout << "ID: " << id << endl;
        cout << " NAME: <" << name << endl;
    }

};

int main() {
    Student s[3] = { {101,"abc1"},{102,"abc2"},{103,"abc3"} };
    std::vector<Student> st ;

    

    return 0;
}