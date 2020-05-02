#include <bits/stdc++.h>
using namespace std;

class Base { };
class Der1 : public Base { };


int main(){
	Der1 dobj;
	Base &bref = dobj;
	Base bobj;
	Base *bptr = &dobj;
	cout<<typeid(bref).name()<<'\t'<<typeid(dobj).name()<<'\t'<<typeid(bobj).name()<<'\t'<<typeid(*bptr).name()<<endl;

	assert( typeid(bref) == typeid(dobj) );
	assert( typeid(bobj) == typeid(dobj) );
	assert( typeid(*bptr) == typeid(dobj) );

	return 0;
}