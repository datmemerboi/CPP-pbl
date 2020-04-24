#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	char *a,*b,*temp;
	a = argv[1]; b = argv[2];
	cout<<"Numbers before swap: "<<*a<<" "<<*b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"After swaping: "<<*a<<" "<<*b<<endl;
}