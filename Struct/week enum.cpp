#include <bits/stdc++.h>
using namespace std;

enum WEEK { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
	float DailyWeight[7];
	cout << "Enter the weights for 7 days of a week: ";
	for(int i=0; i<7;i++)
	{
		cin >> DailyWeight[i];
	}
	cout << "Weight on tuesday: " << DailyWeight[WEEK(2)];
	cout << "\nWeight on thursday: " << DailyWeight[WEEK(4)];
	
	return 0;
} 
