#include <bits/stdc++.h>
using namespace std;

class Participant {
string name;
public:
	Participant(string arg) {
		cout<<"Item created"<<endl;
		name = arg;
	};
	~Participant() {
		cout<<"Item destructed"<<endl;
	};
	void getname() {
		cout<<name;
	};
};

int main() {
	Participant p1("Raagul"); Participant p2("Arjun");
	p1.getname();cout<<" is name of p1"<<endl;
	p2.getname();cout<<" is name of p2"<<endl;
	p1 = p2;
	p1.getname();cout<<" is name of p1"<<endl;
	p2.getname();cout<<" is name of p2"<<endl;

	return 0;
}
