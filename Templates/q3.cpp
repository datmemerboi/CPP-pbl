#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline T const& fun(T &param){
	cout<<param<<endl;
}

int main() {
	// int abc=4;
	string abc="John Doe";

	fun(abc);
	cout<<"The function simple prints the param passed. There is no purpose of using the template just as is."<<endl;
	return 0;
}