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

void primenum(int num){
	for (int i = 2; i < (num/2)+1; ++i)
	{
		if( checkPrime(i) &&  checkPrime(num-i) ){
			cout<<num<<" = "<<i<<" + "<<(num-i)<<endl;
		}
	}
}

int main(){
	int num; cout<<"Enter number: ";cin>>num;
	primenum(num);

	return 0;
}