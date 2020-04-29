#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	// int* arr = (int* ) malloc();
	int rows = atoi( argv[1] ); int cols = atoi( argv[2] );

	int** arr = new int*[rows];

	for(int i = 0; i < rows; ++i)
	    arr[i] = new int[cols];

	int x = 3;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			arr[i][j] = atoi(argv[x++]);
		}
	}
	cout<<endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	// int m;
	// cout<<"Enter increase size of array: ";cin>>m;
	// if(m>0){
	// 	rows += m;
	// }

	// int** inc_arr = new int*[rows];
	// for(int i = 0; i < rows; ++i)
	//     inc_arr[i] = new int[cols];

	// for (int i = 0; i < rows; ++i)
	// {
	// 	for (int j = 0; j < cols; ++j)
	// 	{
	// 		if(arr[i][j])
	// 			inc_arr[i][j] = arr[i][j];
	// 		else
	// 			inc_arr[i][j]=0;
	// 	}
	// }

	// cout<<endl;
	// for (int i = 0; i < rows; ++i)
	// {
	// 	for (int j = 0; j < cols; ++j)
	// 	{
	// 		cout<<inc_arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// for(int i = 0; i < cols; ++i) {
	// 	delete [] inc_arr[i];
	// }
	// delete [] inc_arr;
	
	for(int i = 0; i < cols; ++i) {
	    delete [] arr[i];
	}
	delete [] arr;
}
