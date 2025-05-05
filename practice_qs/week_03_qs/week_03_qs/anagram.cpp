#include <iostream>
#include <string>
#include <cctype> // for tolower()

using namespace std;

bool isAnagram(string s1, string s2); 

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    }
    else {
        cout << "The strings are NOT anagrams." << endl;
    }

    return 0;
}


bool isAnagram(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    int count[26] = { 0 }; // count for a-z (26 letters)

    memset(count, 0, 104);

    for (int i = 0; i < s1.length(); ++i) {
        char c1 = tolower(s1[i]); // convert to lowercase cctype.h
        char c2 = tolower(s2[i]); // convert to lowercase

        count[c1 - 'a']++;  // increment count for s1    minus a is done to make it fit in 26 index value
        count[c2 - 'a']--;  // decrement count for s2
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; ++i) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}