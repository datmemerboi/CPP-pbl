#include <bits/stdc++.h>
using namespace std;

class A  {
public: 
	void display(){  cout << "A::display" ;  }
};

class D : public A {
};

int main(){
	D d1; d1.display();
	return 0;
}