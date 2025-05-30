#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    string disease;

    friend ostream& operator<<(ostream& os, const Patient& p) {
        os << "[ID: " << p.id << ", Name: " << p.name << ", Age: " << p.age << ", Disease: " << p.disease << "]";
        return os;
    }
};
