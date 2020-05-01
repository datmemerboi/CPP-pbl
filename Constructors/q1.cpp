#include <bits/stdc++.h>
using namespace std;

class Point {
	int x_position, y_position;
public:
	Point(){
		x_position = 0; y_position = 0;
	};
};

class Queue {
	int value;
	Queue *next;
public:
	Queue(){
		value = 1;
		*next = NULL;
	};
};

class Employee {
	int emp_no, salary;
	string name, job;
public:
	Employee(int a, string b, string c, int d){
		emp_no = a;
		name = b;
		job = c;
		salary = d;
	};
};