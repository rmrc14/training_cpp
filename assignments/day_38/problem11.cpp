// Problem 2: Duplicate Word Frequency
#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

void wordFrequency() {
    multiset<string> words;
    string text = "hello world hello code hello learn world code";
    istringstream iss(text);
    string word;
    while (iss >> word)
        words.insert(word);  // inserts each word into multiset

    cout << "Sorted Words:\n";
    for (const auto& w : words)  //its already sorted 
        cout << w << " ";
    cout << "\nCount of 'hello': " << words.count("hello") << endl;
    cout << "Count of 'code': " << words.count("code") << endl;
}

int main() {


    wordFrequency();
    
    return 0;
}
