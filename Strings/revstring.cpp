#include <bits/stdc++.h>
using namespace std;

void mystrrev(char *str1, char *str2) {
	for(int i=0; i<strlen(str1); ++i) {
		str2[i] = str1[ (strlen(str1)-i)-1 ];
	}
	cout<<str1<<" is original string."<<endl;
	cout<<str2<<" is reverse string."<<endl;
}

int main() {
	char str1[100], str2[100];
	cout<<"Enter a string: ";cin>>str1;
	mystrrev(str1, str2);
	return 0;
}