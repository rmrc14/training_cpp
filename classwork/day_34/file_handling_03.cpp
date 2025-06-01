#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("sample.txt");

    if (fin.is_open()) {
        // Move to 5th byte from beginning
        fin.seekg(5, ios::beg);

        cout << "Current position (get pointer): " << fin.tellg() << endl;

        char ch;
        fin.get(ch);
        cout << "Character at position 5: " << ch << endl;

        fin.seekg(-3, ios::cur);
        //char ch;
        fin.get(ch);
        cout << "Character at position 5: " << ch << endl;

        fin.seekg(2, ios::cur);
        //char ch;
        fin.get(ch);
        cout << "Character at position 5: " << ch << endl;

        cout << fin.seekg(-30, ios::cur) << endl;

        fin.close();
    }
    return 0;
}