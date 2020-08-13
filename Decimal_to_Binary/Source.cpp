#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int i, x, a[10];
	cout << "Enter Decimal:";
	cin >> i;

	for (x = 0; i > 0;x++)
	{
		a[x] = i % 2;
		i = i / 2;

	}
	cout << "Binary: ";
	for (x = x - 1;x >= 0;x--)
	{
		cout << a[x];
	}
	cout << endl;

	system("pause");
	return 0;
}