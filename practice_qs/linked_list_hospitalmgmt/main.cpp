#include <iostream>
#include "LinkedList.h"
#include "Patient.h"
using namespace std;

int main() {
    LinkedList<Patient> hospital;

    // Add sample patients
    hospital.push_back({ 101, "John Doe", 45, "Flu" });
    hospital.push_front({ 102, "Alice Smith", 30, "Covid" });
    hospital.push_back({ 103, "Bob Lee", 50, "Fever" });

    cout << "\nAll Patients:\n";
    hospital.display();

    cout << "\nSearching for patient with ID 102...\n";
    Patient* found = hospital.findById(102);
    if (found) {
        cout << "Found: " << *found << endl;
    }
    else {
        cout << "Patient not found.\n";
    }

    cout << "\nDeleting patient with ID 101...\n";
    if (hospital.removeById(101)) {
        cout << "Deleted successfully.\n";
    }
    else {
        cout << "Deletion failed.\n";
    }

    cout << "\nRemaining Patients:\n";
    hospital.display();

    return 0;
}
