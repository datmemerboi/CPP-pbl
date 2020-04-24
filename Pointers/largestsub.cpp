#include <bits/stdc++.h>
#include <string.h>
using namespace std;

// char *my_strstr( const char *s1,  const char *s2) {
// 	char a;
// 	a = *s1;
// 	return a;
// }

int main(int argc, char** argv) {
	char *sub1; char *sub2;

	*sub1 = (char) (argv[1]);
	*sub2 = (char) (argv[2]);

	cout<<"First string: "<<sub1<<endl;
	cout<<"Second string: "<<sub2<<endl;

	// char* res = my_strstr(sub1, sub2);
	
	// cout<<*res<<endl;
	return 0;
}