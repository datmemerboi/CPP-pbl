#include <bits/stdc++.h>
using namespace std;
int main() {
	unsigned int amount;
	cout<<"Enter withdrawal amount: ";cin>>amount;
	int hundreds, fifties, tens;

	hundreds = amount/100;
	fifties = amount/50;
	tens = amount/10;

	cout<<"Cashier gives you ";
	cout<<tens<<" notes of 10s"<<endl<<"OR"<<endl;
	cout<<fifties<<" notes of 50s"<<endl<<"OR"<<endl;
	cout<<hundreds<<" notes of 100s"<<endl;

	return 0;
}