#include <bits/stdc++.h>
using namespace std;

void mystrlen(char* s1) {
	int i = 0;
	while(s1[i] != '\0'){
		i++;
	}
	cout<<i;
}

int main() {
	char s1[200];
	cout<<"Enter non space seperated string: "; cin>>s1;
	
	mystrlen(s1);
	
	cout<<endl;
	return 0;
}