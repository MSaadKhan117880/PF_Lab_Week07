#include<iostream>
using namespace std;

int calculateGCD(int, int);
int calculateLCM(int, int, int);

int main()
{
	int num1;
	int num2;
	int gcd;
	int lcm;

	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter a number : ";
	cin >> num2;

	gcd = calculateGCD(num1, num2);
	lcm = calculateLCM(num1, num2, gcd);
	cout << "GCD = " << gcd << endl;
	cout << "LCM = " << lcm << endl;

	return 0;
}

int calculateGCD(int num1, int num2)
{
	int divisor;
	int dividend;
	int remainder;
	int gcd;

	if (num1 > num2)
	{
		divisor = num2;
		dividend = num1;
	}
	else
	{
		divisor = num1;
		dividend = num2;
	}

	while (dividend % divisor != 0)
	{
		remainder = dividend % divisor;
		if (dividend % divisor != 0)
		{
			dividend = divisor;
			divisor = remainder;
		}
	}

	return divisor;
}

int calculateLCM(int num1, int num2, int gcd)
{
	int lcm;

	lcm = (num1 * num2) / gcd;

	return lcm;
}