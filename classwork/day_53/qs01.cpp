#include <iostream>
using namespace std;

char FirstUniqueChar(char* str) {
    int count[256] = { 0 }; // Frequency array for all ASCII characters

    
    for (int i = 0; str[i] != '\0'; ++i) {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; ++i) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return ' ';
}

int main() {
    char input1[] = "appliedmaterials";
    char input2[] = "abacbc";

    cout << "First unique character in \"" << input1 << "\": '" << FirstUniqueChar(input1) << "'" << endl;
    cout << "First unique character in \"" << input2 << "\": '" << FirstUniqueChar(input2) << "'" << endl;

    return 0;
}
