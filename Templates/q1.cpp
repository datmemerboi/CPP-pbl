#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline T const& Swap (T &a, T &b) { 
   T temp = a;
   a = b;
   b = temp;
}

int main () {
   int i = 39;
   int j = 20;
   
   cout<<"Before Swap: "<<i<<" "<<j<<endl;
   Swap(i, j);
   cout<<"After Swap: "<<i<<" "<<j<<endl;
   
   double f1 = 13.5; 
   double f2 = 20.7;

   cout<<"Before Swap: "<<f1<<" "<<f2<<endl;
   Swap(f1, f2);
   cout<<"After Swap: "<<f1<<" "<<f2<<endl; 

   string s1 = "Hello";
   string s2 = "World";

   cout<<"Before Swap: "<<s1<<" "<<s2<<endl;
   Swap(s1, s2);
   cout<<"After Swap: "<<s1<<" "<<s2<<endl;

   return 0;
}