#include <bits/stdc++.h>
using namespace std;

class Time  {
	int hour, minute, second;
	public:
	int hr_to_min() { cout<<"hr_to_min"; }
	int hr_to_sec() {cout<<"hr_to_sec"; }
};
class Logintime: private Time
{
	hr_to_sec();
	hr_to_sec();
};

int main() {
	cout<<"Logintime l;\nl.hr_to_sec();\nl.hr_to_sec();\n"<<" will cause error"<<endl;
	return 0;
}