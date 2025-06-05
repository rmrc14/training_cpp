// Problem 4: Student Scores Summary

#include <iostream>
#include <set>
#include <string>
#include <sstream>

using namespace std;

void studentScoresSummary() {
    multiset<int> scores = { 85, 90, 75, 85, 95, 90, 90 };//for ordered duplicate
    set<int> unique(scores.begin(), scores.end());  // to store the unique scores

    cout << "Unique Scores: " << unique.size() << endl;

    int maxCount = 0, frequent = -1;
    for (int s : unique) {
        int count = scores.count(s);
        if (count > maxCount) {
            maxCount = count;  // saves the frequency
            frequent = s;  // saves the score
        }
    }
    cout << "Most Frequent Score: " << frequent << " (" << maxCount << " times)\n";

    cout << "Ascending: ";
    for (int s : scores) cout << s << " ";
    cout << "\nDescending: ";
    for (auto it = scores.rbegin(); it != scores.rend(); ++it) cout << *it << " "; //reverse iterator 
    cout << endl;                                                           //to print descending order
}

int main() {

    studentScoresSummary();

    return 0;
}
