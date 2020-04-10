#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int number){
	bool prime = true;
	for (int i = 2; i < (number/2); ++i)
	{
		if( number%i==0 )
		{
			prime = false;
			break;
		}
	}
	return prime;
}

void inBetween(int a, int b){
	for (int i = (a+1); i < b; ++i)
	{
		if( checkPrime(i) )
			cout<<" "<<i;
	}
}

int main() {
	int a, b;
	cout<<"Enter 2 numbers: ";cin>>a>>b;
	cout<<"The prime numbers between "<<a<<" and "<<b<<" are:";
	inBetween(a, b);
	cout<<endl;
}