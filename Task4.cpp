#include<iostream>
using namespace std;

int totalDigits(int);
int SumOfDigits(int);

int main()
{
	int number;
	int sumOfDigits;

	cout << "Enter a number: ";
	cin >> number;
	while (number < 0)
	{
		cout << "Invalid Number! Re-enter a positive number: ";
		cin >> number;
	}

	sumOfDigits = SumOfDigits(number);

	cout << "Number of digits = " << sumOfDigits << endl;

	return 0;
}

int SumOfDigits(int num)
{
	int digit_remove;
	int sum_of_number = 0;
	int digit_sum;
	int noOfDigits;

	digit_remove = num;
	noOfDigits = totalDigits(num);

	for (int count =1; count <= noOfDigits; count = count + 1)
	{
		digit_sum = digit_remove % 10;
		sum_of_number = sum_of_number + digit_sum;
		digit_remove = digit_remove / 10;
	}

	return sum_of_number;
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