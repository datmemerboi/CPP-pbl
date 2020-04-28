#include <bits/stdc++.h>
using namespace std;

class Person {
	string name, address;
	int age;
	
	public:
	Person(){
		cout<<"\tItem created"<<endl;
	};
	~Person(void) {
		cout<<name<<" "<<age<<" "<<address<<endl;
		cout<<"\tItem destructed!"<<endl;
	};
	void assign(string arg1, int arg2, string arg3) {
		name = arg1; age=arg2; address=arg3;
	};
};

class Student:public Person {
	int year;
	string course, college_name;
	
	public:
	Student(){
		cout<<"\tItem created"<<endl;	
	};
	~Student() {
		cout<<year<<" "<<course<<" "<<college_name<<endl;
		cout<<"\tItem destructed!"<<endl;
	};
	void assign(int arg1, string arg2, string arg3) {
		year = arg1; course = arg2; college_name = arg3;
	};
};
class Employee:public Person {
	int emp_no, salary;
	string date;
	
	public:
	Employee(){
		cout<<"\tItem created"<<endl;
	}
	~Employee() {
		cout<<emp_no<<" "<<salary<<" "<<date<<endl;
		cout<<"\tItem destructed!"<<endl;
	};
	void assign(int arg1, int arg2, string arg3) {
		emp_no = arg1; salary = arg2; date = arg3;
	};
};

int main (){
	Person p1;
	p1.assign("Arun", 13, "10, Adress road, Tamil Nadu");
	Student s1;
	s1.assign(2016, "CSE 1001", "AVIT"); 
	Employee e1;
	e1.assign(20202, 50000, "03/05/2020");
}