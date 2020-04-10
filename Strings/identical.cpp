#include <bits/stdc++.h>
using namespace std;

int mystrlen(char* s1) {
	int i = 0;
	while(s1[i] != '\0'){
		i++;
	}
	return i;
}

int checkidentical(char *s1, char *s2) {
	int l1 = mystrlen(s1); int l2 = mystrlen(s2);
	if(l1!=l2)
		return 0;
	else {
		for (int i = 0; i < l1; ++i)
		{
			if(s1[i] != s2[i])
				return 0;
		}
		return 1;
	}
}

int main() {
	char s1[100], s2[100];
	cout<<"Enter string 1: ";cin>>s1;
	cout<<"Enter string 2: ";cin>>s2;

	checkidentical(s1, s2) ? cout<<"Identical" : cout<<"Not Identical";

	cout<<endl;
	return 0;
}

