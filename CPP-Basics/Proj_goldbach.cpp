#include <bits/stdc++.h>
using namespace std;

int isPrime (int x) {
	int i;
	for(i=2; i<x; i++){
		if (x%i==0) {
			return false;
		}
	}
	return true;
}
void SumPrimes(int x){
	for(int i=2; i<x; i++){
		if( isPrime(i) && isPrime( (x-i) ) ){
			cout<<x<<" "<<i<<" "<<(x-i)<<endl;
			return;
		}
	}
}

int main(){
	int a, b, c, d;
	cout<<"Enter Numbers: ";cin>>a>>b>>c>>d;cout<<endl;
	SumPrimes(a); SumPrimes(b); SumPrimes(c); SumPrimes(d);
	return 0;
}

