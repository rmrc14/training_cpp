/*

2) The selling price & profit are entered. Write a program to calculate cost price of item.

*/

#include<iostream>

using namespace std;

int main() {

	float selling_price, profit, cost_price = 0.0;

	cout << "enter the selling_price and the profit :" << endl;
	cin >> selling_price >> profit;

	cost_price = selling_price - profit;
	cout << "the cost price" << cost_price;
	return 0;
}