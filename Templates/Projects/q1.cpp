#include <bits/stdc++.h>
using namespace std;

// template <typename T>
class Country{
public:
	string name;
};

class State : public Country{
public:
	string country;
};

class District:public State {
public:	
	string state;
	void showData(){
		cout<<this->name<<this->state<<this->country<<endl;
	}
};

class Home:public District {
public:
	string district;
};

int main() {
	District dptr;
	Home *cptr;
	dptr.name = "Chennai";
	dptr.state = "Tamilnadu";
	dptr.country = "India";
	dptr.showData();
	*cptr = dptr;
	cout<<cptr->name;
}