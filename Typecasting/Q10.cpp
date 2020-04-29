#include <bits/stdc++.h>
using namespace std;
#define DEBIT(a){ cout<<a<<endl; }

#if defined(CREDIT)
    CREDIT(10);
#elif defined(DEBIT)
    DEBIT(10);
#else { cout<<"Error"<<endl;}
#endif


int main() {
	int a;
	
	cout<<"Enter a: ";cin>>a;
	CREDIT(a);
	return 0;
}