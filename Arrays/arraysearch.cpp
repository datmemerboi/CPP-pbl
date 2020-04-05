#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size, elem; bool found = false;
	cout<<"Enter size of array: "; cin>>size;
	
	int Array[size];
	
	cout<<"Enter elements:"
	
	for (int i = 0; i < size; ++i)
	{
		cin>>Array[i];	
	}

	cout<<"Enter element to seach: ";cin>>elem;
	
	for (int i = 0; i < size; ++i)
	{
		if( Array[i]==elem )
		{
			cout<<"*** "<<elem<<" found at index "<<i<<" ***"<<endl;
			found = true;
			break;
		}
	}
	if( found!=true )
		cout<<"!!! Element not found !!!";

	return 0;
}