#include <bits/stdc++.h>
using namespace std;

struct BATSMAN
{
	char name[100]; 
	int age; 
	int highest_score; 
	int least_score; 
	int no_of_ducks;
};

void printData( struct BATSMAN * array) {
	for (int i = 0; i < 3; ++i)
	{
		cout<<"Name: "<<array[i].name<<endl;
		cout<<"Age: "<<array[i].age<<endl;
		cout<<"Highest: "<<array[i].highest_score<<endl;
		cout<<"Least: "<<array[i].least_score<<endl;
		cout<<"Ducks: "<<array[i].no_of_ducks<<endl;
	}
}

int main() {
	struct BATSMAN BatterArray[3];
	for (int i = 0; i < 3; ++i)
	{
		cout<<"Enter name: ";cin>>BatterArray[i].name;
		cout<<"Enter age: ";cin>>BatterArray[i].age;
		cout<<"Enter higest score: ";cin>>BatterArray[i].highest_score;
		cout<<"Enter least_score: ";cin>>BatterArray[i].least_score;
		cout<<"Enter ducs no.: ";cin>>BatterArray[i].no_of_ducks;
		cout<<endl;
	}
	printData( BatterArray );
	cout<<endl;
	return 0;
}