#include<bits/stdc++.h> 
using namespace std; 

string longestSub(string str) 
{
	int n = str.length(); 
	int lar[n+1][n+1]; 

	memset(lar, 0, sizeof(lar));

	string res; int len  = 0;

	int i, index = 0; 
	for (i=1; i<=n; i++) 
	{
		for (int j=i+1; j<=n; j++) 
		{ 
			if (str[i-1] == str[j-1] && 
			lar[i-1][j-1] < (j - i)) 
			{ 
				lar[i][j] = lar[i-1][j-1] + 1;
				if (lar[i][j] > len)
				{ 
					len = lar[i][j]; 
					index = max(i, index); 
				} 
			} 
			else
				lar[i][j] = 0;
		} 
	} 
	if (len > 0)
	{
		for (i = index - len + 1; i <= index; i++)
			res.push_back(str[i-1]); 
	}

	return res; 
} 

int main() 
{ 
	string str;
	cout << "Enter string: ";
	getline( cin, str );
	cout << "Biggest repeated substring: "<< longestSub(str) <<endl;
	 
	return 0; 
} 
