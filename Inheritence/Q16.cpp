#include <bits/stdc++.h>
using namespace std;

class A  {
public:
	void display()  { cout << "A::display()"; }
};

class D : public A{
 public:
	void display( int t ) { cout << "A::display(int ): " << t << endl; }
	void display()  { cout << "D::display ()"; }
};

int main(){
	D d1; d1.display();
	d1.display(10);
	return 0;
}