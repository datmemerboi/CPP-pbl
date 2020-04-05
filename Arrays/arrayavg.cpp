#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size, sum=0;
	cout<<"Enter size of array: "; cin>>size;
	
	int Array[size];
	
	cout<<"Enter "<<size<<" elements: ";
	
	for (int i = 0; i < size; ++i)
	{
		cin>>Array[i];	
	}

	for (int i = 0; i < size; ++i)
	{
		sum += Array[i];
	}
	cout<<"Sum of array elements is "<<sum<<endl;
	cout<<"Average of elements is "<<(sum/size)<<endl;

	return 0;
}