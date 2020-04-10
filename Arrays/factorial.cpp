#include <bits/stdc++.h>
using namespace std;

int factorial(int number) {
	int result=1;
	if( number==1 )
		return 1;
	else {
		result = number*factorial(number-1);
		return result;
	}
}

int main(){
	int num; cout<<"Enter positive integer: ";cin>>num;
	int result = factorial(num);
	cout<<"The factorial of "<<num<<" = "<<result<<endl;
	return 0;
}