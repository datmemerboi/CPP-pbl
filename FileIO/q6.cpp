#include <bits/stdc++.h>
using namespace std;

int main(){
	string substring;
	cout<<"Enter subtring to search for: "; cin>>substring;
	string filename;
	cout<<"Enter file to search in: ";cin>>filename;

	ifstream file (filename);

	string x;

	bool ans=false;

	if (file.is_open())
	{
		while ( getline (file,x) )    
		{
			if (x.find(substring, 0) != string::npos) {
				file.close();
				cout<<"SUBSTRING FOUND"<<endl;
				return 0;
			}
		}
	}
	cout<<"SUBSTRING not FOUND"<<endl;
	return 0;
}
