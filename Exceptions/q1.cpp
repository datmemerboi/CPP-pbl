#include <bits/stdc++.h>
using namespace std;

float division(int a, int b) {
	if( b == 0 ) { throw "Division by zero condition!"; }
	return (a/b);
}

int main ( ) 
{
	int n1, n2;
	float d;
	cout<<"Enter number: "; cin >> n1;
	cout<<"Enter number: "; cin >> n2;
	try {
		d = division(n1, n2);
		cout << "Division answer: " << d << endl;
	} catch (const char* message) {
		cerr<< message <<endl;
	}
	return 0;
}