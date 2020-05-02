#include <bits/stdc++.h>
using namespace std;

class String {
	char A[10];
public:
	String operator [ ] ( int i ){
		cout<<A[i]<<endl;
	};
	String ( char * k ){
		for (int i = 0; i < 10; ++i)
		{
			A[i] = k[i];
		}
	};
	void Display (){
		cout<<A<<endl;
	};
};

int main() {
	char input[10];
	cout<<"Enter string: ";cin>>input;

	String s(input);
	s.Display();

	s[1];

	return 0;
}