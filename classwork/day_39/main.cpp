#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> students;

    // Insert using insert()
    students.insert({ 101, "Alice" });
    students.insert({ 102, "Bob" });

    // Insert using operator[]
    students[103] = "Charlie";

    // Insert using emplace()
    students.emplace(104, "Diana");

    // Access using at()
    std::cout << "Student 102: " << students.at(102) << "\n";

    // Access using operator[]
    std::cout << "Student 103: " << students[103] << "\n";

    // Check size
    std::cout << "Total students: " << students.size() << "\n";

    // Check existence using count()
    if (students.count(105) == 0)
        std::cout << "Student 105 not found.\n";

    // Find element
    auto it = students.find(101);
    if (it != students.end())
        std::cout << "Found Student 101: " << it->second << "\n";

    // Erase a student
    students.erase(102);
    std::cout << "After erasing 102, size: " << students.size() << "\n";

    // Iterate over the map
    std::cout << "All students:\n";
    for (const auto& pair : students) {
        std::cout << "Roll: " << pair.first << ", Name: " << pair.second << "\n";
    }

    // lower_bound and upper_bound
    std::cout << "Lower bound of 103: " << students.lower_bound(103)->first << "\n";
    if (students.upper_bound(103) != students.end())
        std::cout << "Upper bound of 103: " << students.upper_bound(103)->first << "\n";

    // Clear all entries
    students.clear();
    std::cout << "Map cleared. Empty? " << std::boolalpha << students.empty() << "\n";

    return 0;
}