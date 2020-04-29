#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
	if (n==0 || n==1){
		return 1;
	}
	if(n<0){
		cout<<"Invalid argument"<<endl;
		return 0;
	}
	else {
		return n*factorial(n-1);
	}
}

int main(int argc, char** argv) {
	int num = atoi( argv[1] );
	cout<<factorial(num)<<endl;
	return 0;
}