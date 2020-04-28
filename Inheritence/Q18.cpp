#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
	void computeArea(int arg){
		cout<<arg<<endl;
	};
};

class Rectangle:public Shape {
public:
	void computeArea(int l, int b) {
		cout<<(l*b)<<" is area of rect."<<endl;
	};
};

class Square:public Shape {
public:
	void computeArea(int a) {
		cout<<(a*a)<<" is area of sqr."<<endl;
	};
};

class Circle:public Shape {
public:
	void computeArea(int r){
		cout<<(3.14*r*r)<<" is area of circle."<<endl;
	};
};

int main() {
	Rectangle r1; Square s1; Circle c1;
	r1.computeArea(20, 30);
	s1.computeArea(12);
	c1.computeArea(3);

	return 0;
}

