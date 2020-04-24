#include <bits/stdc++.h>
using namespace std;

int main() {
	int* dynam = NULL;
	dynam = new int;

	cout<<"Enter a value: "; cin>>*dynam;
	cout<<"Value you entered is: "<<*dynam<<" stored at :"<<&dynam<<endl;

	delete dynam;
	
	return 0;
}