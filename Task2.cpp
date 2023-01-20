#include<iostream>
using namespace std;

int totalDigits(int);

int main()
{
	int num;
	int digits;

	digits = totalDigits(num);
	
	cout << digits << endl;

	return 0;
}

int totalDigits(int number)
{
	cout << "Enter a number: ";
	cin >> number;

	int count = 1;
	int digit = 1;

	while (count <= number)
	{
		count = count * 10;
		if (count <= number)
		{
			digit = digit + 1;
		}
	}

	return digit;
}