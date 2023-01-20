#include<iostream>
using namespace std;

void printPercentage(int);

int main()
{
	int number;

	printPercentage(number);

	return 0;
}

void printPercentage(int number)
{
	int n;
	float p1 = 0;
	float p2 = 0;
	float p3 = 0;
	float p4 = 0;
	float p5 = 0;
	cout << "How many numbers do you want to enter? ";
	cin >> number;
	for (int count = 1; count <= number; count = count + 1)
	{
		if (count == 1)
		{
			cout << "Enter " << count << "st number: ";
			cin >> n;
		}
		else if (count == 2)
		{
			cout << "Enter " << count << "nd number: ";
			cin >> n;
		}
		else if (count == 3)
		{
			cout << "Enter " << count << "rd number: ";
			cin >> n;
		}
		else
		{
			cout << "Enter " << count << "th number: ";
			cin >> n;
		}
		if (n < 200)
		{
			p1 = p1 + 1;
		}
		else if (n < 400)
		{
			p2 = p2 + 1;
		}
		else if (n < 600)
		{
			p3 = p3 + 1;
		}
		else if (n < 800)
		{
			p4 = p4 + 1;
		}
		else
		{
			p5 = p5 + 1;
		}
	}

	p1 = (p1 * 100.0) / number;
	p2 = (p2 * 100.0) / number;
	p3 = (p3 * 100.0) / number;
	p4 = (p4 * 100.0) / number;
	p5 = (p5 * 100.0) / number;

	cout << "Percentage of numbers under 200 = " << p1 << "%" << endl;
	cout << "Percentage of numbers from 200 to 399 = " << p2 << "%" << endl;
	cout << "Percentage of numbers from 400 to 599 = " << p3 << "%" << endl;
	cout << "Percentage of numbers from 600 to 799 = " << p4 << "%" << endl;
	cout << "Percentage of numbers upwards of 800 = " << p5 << "%" << endl;
}