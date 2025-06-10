/*
4. Balanced Parentheses Checker (Stack)
Problem: Given a string containing characters '(', ')', '{', '}', '[' and ']', 
check if the parentheses are balanced using a stack.

Input: A string expression.

Output: Print "Balanced" or "Not Balanced".
Sample Input 1:
{[()]}
Output 1:
Balanced
Sample Input 2:
{[(])}
Output 2:
Not Balanced

*/

#include<iostream>
#include<stack>

using namespace std;

bool isBalanced(const string& str)
{
	stack<char> s;

	for (auto ch : str)
	{
		if (ch == '{' || ch == '[' || ch == '(')
			s.push(ch);
		else if (ch == '}' || ch == ']' || ch == ')')
		{
			if (s.empty()) return false; //  we are entering because there is an extra  
										 //closing braces if empty then return false
			char top = s.top();
			s.pop();

			if ((ch == '}' && top != '{') ||
				(ch == ']' && top != '[') ||
				(ch == ')' && top != '('))
			{
				return false;
			}


		}

	}

	return s.empty(); // returns true if empty
}
int main()
{
	string input;
	cin >> input;
	if (isBalanced(input))
		cout << "Is balanced " << endl;
	else
		cout << "Not balanced " << endl;


	return 0;
}
