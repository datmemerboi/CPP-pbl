#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	unsigned int time;
	cout<<"Enter time in seconds: ";cin>>time;
	int h,m,s;
	h = time/3600;
	m = (time/60)-(h*60);
	s = time-(h*3600)-(m*60);
	cout<<"Time is "<<h<<" hrs "<<m<<" mins "<<s<<" secs"<<endl;

	return 0;
}