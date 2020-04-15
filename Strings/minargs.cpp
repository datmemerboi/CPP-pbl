#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
	if(argc<2 || argc>6) {
		cout<<"Invalid number of parameters. Try again."<<endl;
	}
	else{
		for (int i = 1; i < argc; ++i)
		{
			cout<<argv[i]<<" ";
		}
	}
	return 0;
}