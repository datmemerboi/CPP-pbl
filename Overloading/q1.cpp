#include <bits/stdc++.h>
using namespace std;

void swap( float a, float b )
{
	float temp;
	temp = a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;
}
void swap( double a, double b )
{
	double temp;
	temp = a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;
}
void swap( long a, long b )
{
	long temp;
	temp = a;
	a=b;
	b=temp;
	cout<<a<<" "<<b<<endl;
}

int main() {
	float a=2.3, b=3.6;
	double x=20102020, y=8528927;
	long p=289128298482894727, q=156465298482628;
	
	swap(a, b);
	swap(x,y);
	swap(p,q);

	return 0;
}