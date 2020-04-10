#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void compare(string s1, string s2) {
	if(s1.length() != s2.length())
		cout<<"The strings are not identical";
	else{
		bool same = true;
		for (int i = 0; i < s1.length(); ++i)
		{
			if(s1[i] != s2[i])
			{
				cout<<s1[i]<<s2[i];
				same = false;
				break;
			}
		}
		same? cout<<"The strings are identical" : cout<<"The strings are not identical";
	}
}

int main() {
	string s1, s2;
	cout<<"Enter 1st string for case sensitive compare: ";cin>>s1;
	cout<<"Enter 2nd string for case sensitive compare: ";cin>>s2;
	compare(s1, s2);
	cout<<endl;
	return 0;
}