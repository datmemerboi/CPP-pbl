#include <bits/stdc++.h>
using namespace std;

#define SWAP(a,b){ int temp = a; a=b; b=temp;}

int main() {
	int a, b;
	cout<<"Enter a, b: ";cin>>a>>b;
	SWAP(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}