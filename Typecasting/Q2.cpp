#include <bits/stdc++.h>
using namespace std;

void myswap(int &p, int &q)
{
	int temp = q;
	q = p;
	p = temp;
}

int main()
{
	int i,j;
	cout << "Enter two numbers : ";
	cin  >> i >> j;
	system ("clear");

	cout << "\nBefore Swapping :\n";
	cout << "i: " << i << "\t" << "j: " << j << endl;

	myswap (i,j);

	cout << "\nAfter Swapping :\n";
	cout << "i: " << i << "\t" << "j: " << j << endl;

	return 0;
}