/*
Problem 2: Scoreboard Manager (Using std::vector)

Objective: 
	Design a scoreboard system that reads scores from users 
	(unbounded in size) and maintains:

		Top 3 highest scores.
		Sorted score list (descending).

Requirements:

	Use std::vector<int> for storing scores.
	Continuously accept input until -1 is entered.
	Sort scores in descending order.
	Extract and display the top 3 scores.

Bonus: 
		Remove duplicate scores before sorting.

Challenge Level: 
	Intermediate → Advanced Focus Areas: Sorting, input handling, use of vector::erase,
	std::unique, and iterators.

*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
	std::vector<int> scores;
	int val;
	while (std::cin >> val && val != -1) {
		scores.push_back(val);
	}

	std::sort(scores.begin(),scores.end());
	std::reverse(scores.begin(), scores.end());
	for (auto it : scores)
		std::cout << it<<" ";
	std::cout << std::endl;

	std::cout << "top 3 scorers are: " << std::endl;
	
	/*
	int i;
	for ( i = 0;i < scores.size()-1;i++)
		if (scores[i] == scores[i + 1])
			std::cout << scores[i] << std::endl;
	if (scores[i] == scores[i-1 ])
		std::cout << scores[i] << std::endl;

	for (int i = 0; i < scores.size(); i++) {
		bool isDuplicate = false;

	// Check if scores[i] appeared before position i
		for (int j = 0; j < i; j++) {
			if (scores[i] == scores[j]) {
				isDuplicate = true;
				break;
			}
		}

		if (!isDuplicate)
			std::cout << scores[i] << std::endl;
	}*/

	


	std::unique(scores.begin(), scores.end());
	for (int i=0;i<3;i++)
		std::cout << scores[i] << " ";

	return 0;
}