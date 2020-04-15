#include <bits/stdc++.h>
using namespace std;

void mystrlen(char* s1) {
	int i = 0;
	while(s1[i] != '\0'){
		i++;
	}
	cout<<i<<" is string length."<<endl;
}

int main(int argc, char** argv) {
	mystrlen( argv[1] );
	return 0;
}