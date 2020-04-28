#include <bits/stdc++.h>
using namespace std;

struct EMP
{
  char emp_name[50]; 
  int emp_id; 
  int emp_age; 
  float emp_salary;
}; 

int main() 
{
  struct EMP e1;
  struct EMP *eptr;
  eptr = &e1;  

  cout << "Enter employee name: "; cin >> (*eptr).emp_name;
  cout << "Enter employee id: "; cin >> (*eptr).emp_id;
  cout << "Enter employee age: "; cin >> (*eptr).emp_age;
  cout << "Enter employee salary: "; cin >> (*eptr).emp_salary;

  cout << "\nEmployee details" << endl;
  cout << "\nName = " << (*eptr).emp_name;
  cout << "\nId = " << (*eptr).emp_id;
  cout << "\nAge = " <<  (*eptr).emp_age;
  cout << "\nSalary = " << (*eptr).emp_salary;

  return 0;
}
