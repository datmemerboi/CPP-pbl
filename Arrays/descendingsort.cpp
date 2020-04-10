#include <bits/stdc++.h>
using namespace std;

void DescendingSort( int Array[], int size ) {
	int i, key, j;  
	for (i = 1; i < size; ++i) 
	{
		key = Array[i];
		j = i - 1;
		while (j >= 0 && Array[j] < key) 
		{
			Array[j + 1] = Array[j];  
			j = j - 1;
		}
		Array[j + 1] = key;  
	}
	cout<<"Array elements after Descending sort.."<<endl;
	for (int i = 0; i < size; ++i)
	{
		cout<<Array[i]<<endl;
	}
}


int main() {
	int size;
	cout<<"Enter size of array: "; cin>>size;
	int Array[size];
	cout<<"Enter array elements:";
	for (int i = 0; i < size; ++i)
	{
		cin>>Array[i];
	}
	DescendingSort(Array, size);
	return 0;
}