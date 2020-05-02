#include <bits/stdc++.h>
using namespace std;
# define size 10

int main() {
	int A[size];
	for (int i = 0; i < size; ++i)
	{
		A[i] = (i+1);
	}
	for (int i = 0; i < 13; ++i)
	{
		try {
			if( i>size )
				throw("Array index out of bound!");
			else
				cout<<A[i]<<endl;
		} catch(const char* message){
			cerr<<message<<endl;
		}
	}

	return 0;
}