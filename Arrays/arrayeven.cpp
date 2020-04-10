#include <bits/stdc++.h>
using namespace std;
void CountEven(int Array[], int size){
	int ecount = 0;
	for (int i = 0; i < size; ++i)
	{
		if( Array[i]%2==0 && Array[i]!=0 ){
			++ecount;
		}
	}
	cout<<"There are "<<ecount<<" even numbers in array"<<endl;
}
void SumEven(int Array[], int size){
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		if( Array[i]%2==0 && Array[i]!=0 ){
			sum+=Array[i];
		}
	}
	cout<<"Sum of even numbers is "<<sum<<endl;
}


int main() {
	int size=20;
	int Array[size];
	cout<<"Enter 20 array elements:";
	for (int i = 0; i < size; ++i)
	{
		cin>>Array[i];
	}
	CountEven(Array, size);
	SumEven(Array, size);
	return 0;
}