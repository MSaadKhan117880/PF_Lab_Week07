#include<iostream>
#include<iomanip>
using namespace std;

float calculateMoney(int, float);

int main()
{
	int age;
	float washingMachinePrice;
	float price_of_toy;
	float totalMoney;


	cout << "Enter age of Lilly: ";
	cin >> age;
	while (age < 1 || age > 77)
	{
		cout << "Invalid Age! Re-enter Lilly's age: ";
		cin >> age;
	}
	cout << "Enter price of washing machine: ";
	cin >> washingMachinePrice;
	while (washingMachinePrice < 1 || washingMachinePrice > 10000)
	{
		cout << "Invalid Price! Re-enter price of washing machine: ";
		cin >> washingMachinePrice;
	}
	cout << "Enter the price of each toy: ";
	cin >> price_of_toy;
	while (price_of_toy < 0 || price_of_toy > 40)
	{
		cout << "Invalid Price! Re-enter price of toys: ";
		cin >> price_of_toy;
	}


	totalMoney = calculateMoney(age, price_of_toy);
	if (totalMoney > washingMachinePrice)
	{
		cout << "Yes! Lilly has " << fixed << setprecision(2) << totalMoney - washingMachinePrice << "$" << endl;
	}
	else
	{
		cout << "No! Lilly need " << fixed << setprecision(2) << washingMachinePrice - totalMoney << "$" << endl;
	}
	
	return 0;
}

float calculateMoney(int age, float toysPrice)
{
	int toys = 0;
	float money = 0;
	float moneySaved = 0;
	int moneyStolen = 0;
	float totalPriceToys;
	float totalMoney;

	for (int i = 1; i <= age; i = i + 1)
	{
		if (i % 2 == 0)
		{
			money = money + 10.00;
			moneySaved = moneySaved + money;
			moneyStolen = moneyStolen + 1;
		}
		else
		{
			toys = toys + 1;
		}
	}
	
	moneySaved = moneySaved - moneyStolen;
	totalPriceToys = toys * toysPrice;
	totalMoney = totalPriceToys + moneySaved;

	return totalMoney;
}