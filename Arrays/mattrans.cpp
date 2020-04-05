#include <bits/stdc++.h>
using namespace std;

int main()
{
	int rows, cols;
	cout<<"Enter rows and cols: ";
	cin>>rows>>cols;

	int Array[rows][cols];
	
	cout<<"Enter elements: ";
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin>>Array[i][j];
		}
	}
	
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout<<Array[i][j]<<" ";
		}
		cout<<endl;
	}

	for (int j = 0; j < cols; ++j)
	{
		for (int i = 0; i < rows; ++i)
		{
			cout<<Array[i][j]<<"\t";
		}
		cout<<endl;
	}

	return 0;
}