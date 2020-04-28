#include <bits/stdc++.h>
#pragma pack(1);
using namespace std;

struct data1 
{
  char c; 
  int x; 
}d1;  

struct data2
{
  char arr[10]; 
  int x; 
}d2;  

struct data3
{
  char arr[10];
  long int x; 
}d3;    

struct data4 
{
  char arr[100];  
  int x;    

}d4;
int main() 
{ 
  cout << "Size of struct 1: " <<  sizeof(d1); 
  cout << "\nSize of struct 2: " <<  sizeof(d2);
  cout << "\nSize of struct 3: " <<  sizeof(d3);
  cout << "\nSize of struct 4: " <<  sizeof(d4);

  return 0; 
} 
