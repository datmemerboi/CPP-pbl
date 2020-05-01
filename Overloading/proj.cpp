#include <bits/stdc++.h>
using namespace std;

class Int {
private:
	int value;
public:
	Int(){
		value = 0;
	};
	Int( int arg ){
		value = arg;
	};
	Int( Int &b ){
		value = b.value;
	};
	Int operator = (Int a){
		Int some; some.value = a.value;
		return some;
	};
	Int operator ++ (){
		Int some; some.value = this->value+1;
		return some;
	};
	Int operator += (Int a){
		Int some; some.value = a.value+1;
		return some;
	};
	Int operator -= (Int a){
		Int some; some.value = a.value-1;
		return some;
	};
	void getVal(){
		cout<<this->value<<endl;
	}
	Int operator >> () {
		cin>>this->value;
	};
	Int operator <<() {
		cout<<this->value;
	};
};
int main() {
	Int x(10);
	x.getVal();
	Int y(x);
	y.getVal();
	Int z;
	z += x;
	z.getVal();
}