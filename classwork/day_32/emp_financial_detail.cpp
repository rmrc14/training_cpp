#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string p_name;
    char p_G;
    int p_age;
    int p_phNo;
public:
    ~Person() {}
    Person(const string& n, char g, int age, int phno)
        : p_name(n), p_G(g), p_age(age), p_phNo(phno) {}

    void display() {
        cout << "Name: " << p_name << endl;
        cout << "Gender: " << p_G << endl;
        cout << "Age: " << p_age << endl;
        cout << "Phone No: " << p_phNo << endl;
    }
};

class Employee : private Person { // changed from public
protected:
    int e_id;
    int e_sal;
    string e_dept;
public:
    ~Employee() {}
    Employee(const string& n, char g, int age, int phno, int id, int sal, const string& dept)
        : Person(n, g, age, phno), e_id(id), e_sal(sal), e_dept(dept) {}
   
    /*void showPersonDetails() {
        
    }*/

    void display() {
        Person::display();
        cout << "ID: " << e_id << endl;
        cout << "Dept: " << e_dept << endl;
        cout << "Salary: " << e_sal << endl;
    }
};

class EmpFin : private Employee {
private:
    int e_pt;
    int e_pf;
    int e_vp;
    int e_days;
public:
    EmpFin(const string& n, char g, int age, int phno, int id, int sal, const string& dept,
        int pt, int pf, int vp, int days)
        : Employee(n, g, age, phno, id, sal, dept),
        e_pt(pt), e_pf(pf), e_vp(vp), e_days(days) {}

    ~EmpFin() {}

    void dispEmpFin() {
        //showPersonDetails();
        //Person::display();
        display();
        cout << "P Tax: " << e_pt << endl;
        cout << "P f: " << e_pf << endl;
        cout << "vp: " << e_vp << endl;

        int gs = (e_sal - e_pt - e_pf) / 30;
        gs = gs * e_days + e_vp;

        cout << "Gross Salary: " << gs << endl;
    }
};

int main() {
    EmpFin e("Alice", 'm', 22, 1234, 29212, 26000, "IT", 200, 2600, 100000, 24);
    e.dispEmpFin();

    return 0;
}
