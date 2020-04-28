#include <bits/stdc++.h>
using namespace std;

struct DATA
{
  int num1; 
  int num2; 
  int num3;
  int average; 
};  

int CalculateAvg(struct DATA d1)
{
  int sum = d1.num1 + d1.num2 + d1.num3;
  d1.average = sum / 3;
  return d1.average;
}

int main() 
{
  struct DATA d1;         

  cout << "Enter the details of data(num1, num2, num3): ";
  cin >> d1.num1 >> d1.num2 >> d1.num3;
  d1.average = CalculateAvg(d1);
  cout << "Average: " << d1.average;
  
  return d1.average;
}
