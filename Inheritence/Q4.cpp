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

int main(){ return 0; }