#include <iostream>
#include <vector>
#include <fstream>
#include "Financial.h"

using namespace std;

void saveToFile(const vector<Financial>& list, const char* filename) {
    ofstream fout(filename, ios::binary);
    for (const auto& emp : list) {
        fout.write(reinterpret_cast<const char*>(&emp), sizeof(Financial));
    }
    fout.close();
}

void loadFromFile(vector<Financial>& list, const char* filename) {
    list.clear();
    ifstream fin(filename, ios::binary);
    Financial temp;
    while (fin.read(reinterpret_cast<char*>(&temp), sizeof(Financial))) {
        list.push_back(temp);
    }
    fin.close();
}

void printAll(const vector<Financial>& list) {
    for (const auto& emp : list) {
        emp.print();
    }
}

bool updateByName(vector<Financial>& list, const char* name, double newSalary) {
    for (auto& emp : list) {
        if (strcmp(emp.getName(), name) == 0) {
            emp.setSalary(newSalary);
            return true;
        }
    }
    return false;
}

bool deleteByName(vector<Financial>& list, const char* name) {
    for (auto it = list.begin(); it != list.end(); ++it) {
        if (strcmp(it->getName(), name) == 0) {
            list.erase(it);
            return true;
        }
    }
    return false;
}

bool searchByName(const vector<Financial>& list, const char* name) {
    for (const auto& emp : list) {
        if (strcmp(emp.getName(), name) == 0) {
            emp.print();
            return true;
        }
    }
    return false;
}

int main() {
    vector<Financial> employees;
    const char* filename = "employees.dat";

    int choice;
    char name[50];
    double salary;

    loadFromFile(employees, filename);

    do {
        cout << "\n--- Employee Management ---\n";
        cout << "1. Add Employee\n2. View All\n3. Update Salary\n4. Delete\n5. Search\n6. Save and Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter name: ";
            cin.getline(name, 50);
            cout << "Enter salary: ";
            cin >> salary;
            employees.emplace_back(name, salary);
            break;

        case 2:
            printAll(employees);
            break;

        case 3:
            cout << "Enter name to update: ";
            cin.getline(name, 50);
            cout << "Enter new salary: ";
            cin >> salary;
            if (!updateByName(employees, name, salary))
                cout << "Employee not found.\n";
            break;

        case 4:
            cout << "Enter name to delete: ";
            cin.getline(name, 50);
            if (!deleteByName(employees, name))
                cout << "Employee not found.\n";
            break;

        case 5:
            cout << "Enter name to search: ";
            cin.getline(name, 50);
            if (!searchByName(employees, name))
                cout << "Employee not found.\n";
            break;

        case 6:
            saveToFile(employees, filename);
            cout << "Data saved.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
