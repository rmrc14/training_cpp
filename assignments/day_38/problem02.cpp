#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>  // for std::tolower

using namespace std;

int main() {
    vector<string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

    // Convert all words to lowercase
    for (auto& word : words) {
        //[](unsigned char c) { return std::tolower(c); }  //for other sys negative value
        transform(word.begin(), word.end(), word.begin(),::tolower);
    }

    //  Sort the vector
    sort(words.begin(), words.end());

    //  Remove duplicates using unique + erase
    auto last = unique(words.begin(), words.end());
    words.erase(last, words.end());

    // Print the results
    cout << "[";
    for (size_t i = 0; i < words.size(); ++i) {
        cout << '"' << words[i] << '"';
        if (i + 1 < words.size()) cout << ", ";
    }
    cout << "]\n";

    return 0;
}
