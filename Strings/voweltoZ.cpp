#include <bits/stdc++.h>
using namespace std;

void vowelstoZ(char *s1) {
	int i=0;
	while(s1[i] != '\0') {
		if(s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U' ||
			s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u') {
			s1[i]='Z';
		}
		cout<<s1[i];
		i++;
	}
}

int main() {
	char s1[100];
	cout<<"Enter string to change to z: ";cin>>s1;

	vowelstoZ(s1);

	cout<<endl;
	return 0;
}