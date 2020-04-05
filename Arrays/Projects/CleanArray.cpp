#include <bits/stdc++.h>
using namespace std;

int DigitSum(int n)
{
	int sum=0;
	while(n>0){
		sum+=(n%10);
		n/=10;
	}
	if(sum>9)
		sum = DigitSum(sum);
	return sum;
}

void CleanUp(int Array[6] ){
	// Rule 1-3
	int i,j;
	for(i=0; i<6; ++i){
		j=i+1;
		while(j<6){
			if(Array[j]==Array[i])
				Array[j]=0;
			++j;
		}
		if(Array[i]>9){
			Array[i] = DigitSum(Array[i]);
		}
	}
	// Rule 4
	/*for(i=0; i<6; ++i){
		int p=0;
		while(p<6){
			int q=0;
			while(q<6){
				if( Array[i]==(Array[p]+Array[q]) ){
					Array[i]=0;
				}
				++q;
			}
			++p;
		}
	}*/

	for(i=0; i<6; i++){
		j = 0;
		while(j<6){
			if(Array[i] == pow( Array[j], 2) )
				Array[i]=0;
		}
	}

	for (i=0; i<6; ++i)
	{
		if(Array[i]==0)
			continue;
		cout<<Array[i]<<" ";
	}
}

int main()
{
	int Array[6], i;
	cout<<"Enter each element: ";
	for (i=0; i<6; ++i)
	{
		cin>>Array[i];
	}
	CleanUp(Array);
	return 0;
}