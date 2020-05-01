#include <bits/stdc++.h>
using namespace std;

class XYZ {
	int a;
	public:
		friend void test(XYZ& p);
		XYZ (int a = 10)   {   this->a = a;   } // observer the use of this pointer.
};

void test(XYZ obj) {
	// obj.a  =  12;                             
	cout << obj.a << endl;
}

int main(){
	test();
	return 0;
}