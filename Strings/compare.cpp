#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void insensitiveCompare(string s1, string s2) {
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if(s1.compare(s2) == 0)
		cout<<"The strings are identical."<<endl;
	else
		cout<<"The strings are NOT identical!"<<endl;
}
void sensitiveCompare(string s1, string s2){
	if( s1.compare(s2)==0)
		cout<<"The strings "<<s1<<" and "<<s2<<" are identical."<<endl;
	else
		cout<<"The strings "<<s1<<" and "<<s2<<" are NOT identical!"<<endl;
}

int main() {
	string s1, s2;
	cout<<"Enter 1st string for case sensitive compare: ";cin>>s1;
	cout<<"Enter 2nd string for case sensitive compare: ";cin>>s2;
	sensitiveCompare(s1, s2);
	
	cout<<"---"<<endl;
	
	cout<<"Enter 1st string for case insensitive compare: ";cin>>s1;
	cout<<"Enter 2nd string for case insensitive compare: ";cin>>s2;
	insensitiveCompare(s1, s2);

	return 0;
}