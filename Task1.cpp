#include<iostream>
using namespace std;

int main()
{

	int fib1 = 0;
	int	fib2 = 1;
	int	fibn;
	int	nth_term;

	cout << "Enter the terms of fibonacci sequence: ";
	cin >> nth_term;

	cout << fib1 << ", " << fib2 << ", ";

	for (int count = 3; count <= nth_term; count = count + 1)
	{
		fibn = fib1 + fib2;
		cout << fibn;
		if (count != nth_term)
		{
			cout << ", ";
		}
		fib1 = fib2;
		fib2 = fibn;
	}

	return 0;
}