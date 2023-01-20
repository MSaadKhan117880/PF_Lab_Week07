#include<iostream>
#include<iomanip>
using namespace std;

float calculatePrice(float, int);

int main()
{
	float inheritance;
	int years;
	float finalMoney;

	cout << "Enter inheritance amount: ";
	cin >> inheritance;
	while (inheritance < 1 || inheritance > 1000000)
	{
		cout << "Invalid amount! Re-enter inheritance amount: ";
		cin >> inheritance;
	}
	cout << "Enter a year till which you are going to live: ";
	cin >> years;
	while (years <= 1800 || years > 1900)
	{
		cout << "Wrong Year! Re-enter year: ";
		cin >> years;
	}

	finalMoney = calculatePrice(inheritance, years);
	if (finalMoney < 1)
	{
		cout << "He will need " << fixed << setprecision(2) << -(finalMoney) << "$ to survive. " << endl;
	}
	else
	{
		cout << "Yes! He will live a carefree life and will have " << fixed << setprecision(2) << finalMoney << "$ left" << endl;
	}

	return 0;
}

float calculatePrice(float money, int years)
{
	int age = 18;
	float moneySpent = 0.00;

	for (int i = 1800; i <= years; i = i + 1)
	{
		if (i % 2 == 0)
		{
			moneySpent = moneySpent + 12000.0;
		}
		else
		{
			moneySpent = moneySpent + (12000.0 + (50.0 * age));
		}
		age = age + 1;
	}

	money = money - moneySpent;

	return money;
}