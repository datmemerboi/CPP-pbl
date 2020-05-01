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
		Int some = plusplus(this);
		return some;
	};
	Int operator += (Int a){
		Int some = plusequal(Int a);
		return some;
	};
	Int operator -= (Int a){
		Int some = minusequal(Int a);
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
void plusplus(Int i){
	Int some; some.value = i.value+1;
	return some;
}
void plusequal(Int a){
	Int some; some.value = a.value+1;
	return some;
}
void minusequal(Int a){
	Int some; some.value = a.value-1;
	return some;
}
int main() {
	Int x(10);
	x.getVal();
	Int y(x);
	y.getVal();
	Int z;
	z += x;
	z.getVal();
}