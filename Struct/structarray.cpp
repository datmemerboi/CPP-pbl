#include <bits/stdc++.h>
using namespace std;
int MAX = 0; int MIN = 100;
char MAX_name[100], MIN_name[100];

struct student
{
	char student_name[100]; 
	int roll_no; 
	int mark1; 
	int mark2; 
	int mark3;
};
int average( int a, int b, int c) {
	return ( (a+b+c)/3 );
}
void findMaxMin(struct student *array) {
	for (int i = 0; i < 3; ++i)
	{
		int this_avg = average( array[i].mark1, array[i].mark2, array[i].mark3);
		cout<<this_avg<<" is average of "<< array[i].student_name<<endl;
		if( this_avg > MAX ) {
			MAX = this_avg;
			strcpy(MAX_name,array[i].student_name) ;
		}
		if( this_avg < MIN ) {
			MIN = this_avg;
			strcpy(MIN_name,array[i].student_name) ;
		}
	}
}
void whoseLarge() {
	cout<<endl;
	cout<<MAX_name<<" scored max of "<<MAX<<endl;
	cout<<MIN_name<<" scored min of "<<MIN<<endl;
}

int main() {
	struct student StudArr[3];
	for (int i = 0; i < 3; ++i)
	{
		cout<<"Enter Name of student: ";cin>>StudArr[i].student_name;
		cout<<"Enter Roll No: ";cin>>StudArr[i].roll_no;
		cout<<"Enter Marks 1, 2, 3: ";cin>>StudArr[i].mark1 >> StudArr[i].mark2 >> StudArr[i].mark3;
		cout<<endl;
	}
	findMaxMin( StudArr );
	whoseLarge();
	return 0;
}