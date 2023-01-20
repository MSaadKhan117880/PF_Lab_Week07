#include<iostream>
using namespace std;

void Table(int);

int main()
{
	int number;
	Table(number);

	return 0;
}

void Table(int num)
{
	cout << "Enter a number: ";
	cin >> num;
	for (int i = 1; i <= 10; i = i + 1)
	{
		cout << num << " x " << i << " = " << num * i << endl;
	}
}