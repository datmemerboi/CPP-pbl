#include <bits/stdc++.h>
using namespace std;

class Base {
public:
	Base(string s) : str(s) { }
	string getstr() { return str; }
	virtual void show() { cout << str << endl; }
	private:
	string str;
};

class Der : public Base   {
public:
	Der(int n, string s) : Base(s), num(n) {  }
	void show()  { cout << " " << num<< endl; }
	private:
	int num;
};

int main(){
	Base bobj("hello"); 
	Base *bptr1 = &bobj; 
	Base &bref1 = bobj;

	Der dobj(100,"welcome");
	Base *bptr2=&dobj;
	Base &bref2 = dobj;

	bobj.show();
	dobj.show();
	bptr1->getstr();
	bptr2->getstr();
	bref1.show();
	bref2.show();
}