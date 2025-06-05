// Problem 1: Score Tracker
#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include<vector>

using namespace std;

void scoreTracker() 
{

    //by default it is ascending order so to get the largest explicitly mention greater
    multiset<int, greater<int>> scores;  // descending order 

    string input;
    while (getline(cin, input)) {
        istringstream iss(input);
        string cmd;
        iss >> cmd;

        if (cmd == "ADD") {
            int score;
            iss >> score;
            scores.insert(score);
        }
        else if (cmd == "COUNT") {
            int score;
            iss >> score;
            cout << scores.count(score) << endl;
        }
        else if (cmd == "TOP3") 
        {
            int count = 0;// for printing  the top 3
            for (int s : scores) {
                cout << s << " ";
                if (++count == 3) break;
            }
            cout << endl;
        }
        else if (cmd == "REMOVE") {
            int score; 
            iss >> score; //get it as an integer

            auto it = scores.find(score);
            while (it != scores.end()) {
                scores.erase(it);
                it = scores.find(score);
            }
        }
    }
}



int main() {
    
     scoreTracker();
    
    return 0;
}


/*
ADD 50
ADD 70
ADD 90
ADD 70
COUNT 70
TOP3
REMOVE 70
TOP3
*/