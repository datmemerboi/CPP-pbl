#include <bits/stdc++.h>
using namespace std;

struct data1 
{
    char c; 
    int x; 
};  

struct data2 
{
    char arr[10]; 
    int x; 
};  

struct data3 
{
    char arr[10];
    long int x; 
};    

struct data4 
{
    char arr[100];  
    int x;        
};

int main() {
    struct data1 d1;
    d1.c = 'a'; d1.x = 30;

    struct data2 d2;
    d2.arr = 'hell'; d2.x = 500;
    
    struct data3 d3;
    d3.arr = 'low'; d3.x = 6868;
    
    struct data4 d4;
    d4.arr = 'John'; d4.x = 69;

    cout<<sizeof(d1)<<endl;
    cout<<sizeof(d2)<<endl;
    cout<<sizeof(d3)<<endl;
    cout<<sizeof(d4)<<endl;

    return 0;
}