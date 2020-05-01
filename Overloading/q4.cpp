#include <bits/stdc++.h>
using namespace std;

class String{
private:
	string content;
public:
	String(string argument){
		content = argument;
	};
	String operator [ (int a) ]  {
		return content.at(a);
	};
};

int main(){
	String s("abcd");
	char ch;
	ch = s[1];
	cout<<ch<<endl;
	return 0;
}
