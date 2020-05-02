#include <bits/stdc++.h>
using namespace std;

namespace nsone  {
  int x; int a,b,c;
  int sumit() {
  	x = a+b+c;
  	return x;
  }
}

namespace nstwo  {
  int x; int p,q,r,s;
  int prodit() {
  	x = p*r*q*s;
  	return x;
  }
}

int main( ) {
	using namespace nsone;
	a = 10; b=20; c=30;
	sumit();
	cout<<nsone::x<<" from nsone.."<<endl;
	
	using namespace nstwo;
	p = 2; q=4; r=3; s=5;
	prodit();
	cout<<nstwo::x<<" from nstwo.."<<endl;
	return 0;
}