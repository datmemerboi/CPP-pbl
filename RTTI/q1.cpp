#include <bits/stdc++.h>
using namespace std;

class Number{
unsigned value;
public:
	void setVal(unsigned a){
		value = a;
	};
	friend void check(Number* ptr);
};

class Integer:public Number {
int value;
public:
	void setVal(int a){
		value = a;
	};
};

void check(Number* ptr){
	cout<<typeid(ptr).name()<<endl;
};

int main() {
	Number *nptr =  new Integer;
	Integer *iptr = dynamic_cast<Integer*>(nptr);

	check(nptr); check(iptr);

	return 0;
}