#include <bits/stdc++.h>
using namespace std;

struct s_memo {
	int nVal;
	char cVal;
};

union u_memo {
	int nVal;
	char cVal;
};

int main() {
	struct s_memo s; union u_memo u;
	cout<<"Enter int for struct: ";cin>>s.nVal;
	cout<<"Enter char for struct: ";cin>>s.cVal;
	cout<<endl;

	cout<<"Enter int for union: ";cin>>u.nVal;
	cout<<"Enter char for union: ";cin>>u.cVal;
	cout<<endl;
	
	cout<<"Size of struct: "<<sizeof(s)<<endl;
	cout<<"Size of union: "<<sizeof(u)<<endl;
	return 0;
}