#include<iostream>
using namespace std;

int totalDigits(int);
int NoOfDigits(int, int);

int main()
{
	int number;
	int digit;
	int digit_common;

	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter digit: ";
	cin >> digit;

	digit_common = NoOfDigits(number, digit);

	cout << "Number of digits = " << digit_common << endl;

	return 0;
}

int NoOfDigits(int num, int digit)
{
	int count = 1;
	int digit_remove;
	int digit_common = 0;
	int digit_compare;
	int noOfDigits;

	digit_remove = num;
	noOfDigits = totalDigits(num);

	while (count <= noOfDigits)
	{
		digit_compare = digit_remove % 10;
		digit_remove = digit_remove / 10;
		if (digit_compare == digit)
		{
			digit_common = digit_common + 1;
		}
		count = count + 1;
	}

	return digit_common;
}

int totalDigits(int number)
{

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