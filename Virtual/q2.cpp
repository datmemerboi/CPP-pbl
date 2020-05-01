#include <bits/stdc++.h>
using namespace std;

class Vehicles {
protected:
	int num_of_wheels; string type;
};

class Four:public Vehicles {
public:
	void assign(){
		num_of_wheels = 4;
		type = "Four Wheeler";
	};
};

class Cars:public Four {
public:
	void assign(){
		type="Car";
	};
	friend void show(Cars& cref);
};

class Sedan:public Cars {
public:
	void assign(){
		type="Sedan";
	};
};

class SUV:public Cars {
public:
	void assign() {
		type="SUV";
	};
};
void show(Cars& cref) {
	cout<<cref.type<<endl;
}
int main(){
	Four f1; f1.assign();
	cout<<"Instances of Four object cannot use show()"<<endl;

	Cars c1; c1.assign();
	Sedan s1; s1.assign();
	SUV u1; u1.assign();
	cout<<"Instances of Cars / Sedan / SUV can use show()"<<endl;
	
	show(c1); show(s1); show(u1);
	return 0;
}