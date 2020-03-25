#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d, e; float avg;
	cout<<"Enter space seperated 5 integers:";cin>>a>>b>>c>>d>>e;cout<<endl;
	avg = (a+b+c+d+e)/5;
	cout<<"Average is: "<<avg<<endl;
	
	cout<<"---	---"<<endl;
	
	cout<<"Enter num to increment: ";cin>>a;cout<<endl;
	cout<<++a<<endl;
	
	cout<<"---	---"<<endl;
	
	cout<<"Enter space seperated 2 integers: ";cin>>b>>c;cout<<endl;
	int GREATER = (b>c)?b:c;
	cout<<GREATER<<" is the GREATEST"<<endl;

	cout<<"---	---"<<endl;

	cout<<"Enter space seperated 2 integers: ";cin>>d>>e;cout<<endl;
	int sum = d+e; int diff = (d>e)?d-e:e-d;
	cout<<"Sum: "<<sum<<" and Difference: "<<diff<<endl;
	return 0;
}