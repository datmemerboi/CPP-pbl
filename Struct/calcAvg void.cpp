#include <bits/stdc++.h>
using namespace std;

struct DATA
{
  int num1; 
  int num2; 
  int num3;
  int average; 
};  

void CalculateAvg(struct DATA *dt1)
{
  int sum = dt1 -> num1 + dt1 -> num2 + dt1 ->num3;
  dt1 -> average =  sum / 3;
  cout << "Average: " << dt1 -> average << endl;
}

int main() 
{
  struct DATA d1;
  cout << "Enter the details of data(num1, num2, num3): ";
  cin >> d1.num1 >> d1.num2 >> d1.num3;
  CalculateAvg(&d1);
  
  return 0;
}

