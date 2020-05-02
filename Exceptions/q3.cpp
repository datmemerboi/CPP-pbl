#include <bits/stdc++.h>
using namespace std;

int main() {
	string fname; string text;

	cout<<"Enter .txt file name: "; cin>>fname;
	ifstream os;
	try{
		if(os.open(fname) ){
			os>>text;
			cout<<text<<endl;
		}
		else
			throw("Error 404, File not found!");
	} catch(const char* message){
		cerr<<message<<endl;
	}
}