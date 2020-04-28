#include <bits/stdc++.h>
using namespace std;

class A  {
	protected:
	int data; 
	public: 
	A(int x):data(x) {
		// cout<<x<<endl;
	}
};

class D : public A  {
	int data;
	public:
	D(int x, int y):A(x),data(y) {
		// cout<<x<<" "<<y<<endl;
	} 
	int getdata(){
		return data;
	}
};

int main() {
	D d1(30, 20);
	cout<<d1.getdata()<<endl;
}