#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cout<<"Enter size of array: ";cin>>size;
	
	int Array[size];
	cout<<"Enter "<<size<<" elements: ";
	
	for(int i=0; i<size; ++i)
	{
		cin>>Array[i];
	}

	int max = 0;
	for (int i = 0; i < size; ++i)
	{
		if(Array[i]>max)
			max = Array[i];
		else
			cout<<max<<endl;
	}
	cout<<"Largest element is "<<max<<endl;
	return 0;
}