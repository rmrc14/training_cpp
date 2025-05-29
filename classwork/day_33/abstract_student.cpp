#include<iostream>
using namespace std;

class Admin {
    string admin_name;

public:
    virtual ~Admin() {}
    Admin(string admin_name) : admin_name(admin_name) {}
    virtual void manageStudent() = 0;
};

class Student : public Admin {
protected:
    int rollno;
    string name;

public:
    virtual ~Student(){}
    Student(int rollno, string name, string admin_name) :
        Admin(admin_name), rollno(rollno), name(name) {}

    virtual void Mark() = 0;

    void manageStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

class Marks : public Student {
protected:
    int marks;

public:
    virtual ~Marks(){}
    Marks(int marks, int rollno, string name, string admin_name) :
        Student(rollno, name, admin_name), marks(marks) {}

    virtual bool sportQualification() = 0;

    void Mark() {
        cout << "Marks: " << marks << endl;
    }
};

class Sports : public Marks {
public:
    Sports(int marks, int rollno, string name, string admin_name) :
        Marks(marks, rollno, name, admin_name) {}

    bool sportQualification() {
        if (marks >= 45) {
            cout << "Marks: " << marks << endl;
            cout << "Student eligible to participate in extracurricular activities (sports)." << endl;
            return true;
        }
        else {
            cout << "Marks: " << marks << endl;
            cout << "Student not eligible for extracurricular activities." << endl;
            return false;
        }
    }
};

int main() {
    Sports s1(50, 101, "Alice Bob Charlie", "Principal Admin");

    s1.manageStudent();
    s1.Mark();
    s1.sportQualification();

    return 0;
}
