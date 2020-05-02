#include <bits/stdc++.h>
using namespace std;

namespace ns  {
  int x; 
}

int main( ) {
  int x = 9;
  using namespace ns;
  ns::x = 20; // Line 1
  cout<<x<<":"<<ns::x<<endl;

  return 0;
}