#include <iostream>
using namespace std;

int main()
{
	double meal_cost, tax, cost_tax, tip, total;
	cout << "What is the cost of your meal?\n";
	cin >> meal_cost;

	tax = meal_cost*.0675;
	cost_tax = meal_cost + tax;
	tip = cost_tax*.15;
	total = tip + cost_tax;

	cout << "Your meal cost $" << meal_cost << endl;
	cout << "The tax you paid is " << tax << endl;
	cout << "The proper tip amount is " << tip << endl;
	cout << "The total amount you owe is $" << total << endl;
	system("pause");
	return 0;
}