// Number, Integer, FloatingPoint, Scientific, Fixed.

#include <bits/stdc++.h>
using namespace std;

class Number {
	protected:
		int val;
};

class Integer:public Number {
public:
	void setValue( int arg ){
		val = arg;
		cout<<val<<endl;
	}
};

class Floating:public Number {
public:
	float val;
	void setValue( float arg) {
		val = arg;
		cout<<val<<endl;
	}
};
int main() {
	Integer a;
	a.setValue( 35 );

	Floating b; b.setValue( 2.0043 );
	return 0;
}