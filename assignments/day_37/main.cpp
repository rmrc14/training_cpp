/*Description:  God Number
Problem Statement: God Number

You are given a string s of length n only containing digits from 0-9. 
Find the God Number for the given string. God Number for a string is said to be 
the absolute difference between the maximum and minimum definite value of characters.

The Definite Value of a character is an integer that is represented by the 
multiplication of its character value and its frequency.

If a string contains only a single type of character, then return that character's
definite value as the answer.

Input Format

The one and only line contain a string s.
Constraints

1<=|s|<=105
Output Format

Return the God Number as asked in the problem statement.
Sample Input

1234567897653322
Sample Output

13
Explanation

Here, the maximum definite value will be of 7 which is equal to 14 and the minimum 
will be of 1 which is 1.

So the difference is 13.
*/
#include<string>
#include<iostream>
#include <climits> // for INT_MAX and INT_MIN
#include <cmath>   // for abs

using namespace std;

class GodNumber
{
	string strgno;
	
public:
	GodNumber(string gno):strgno(gno){}
	~GodNumber(){}
	int findingGNo()
	{
		int freq[10] = {0};
		for(char ch:strgno)
		{
			int digit = ch - '0';
			freq[digit]++;  // incerement the freq  

		}
		int max = INT_MIN,min=INT_MAX;
		for (int i=0; i < 10; i++)
		{
			if (freq[i] > 0)
			{
				int definite = i * freq[i];
				min =  definite<min ? definite : min;
				max=  definite>max ? definite : max;
			}
		}
		if (min == max)
			return min;
		else
			return abs(max - min);
	}

};

int main()
{
	string s;
	cin >> s;

	GodNumber gn(s);
	cout << gn.findingGNo() << endl;


	return 0;
}