#include <bits/stdc++.h>
using namespace std;

class Stack {
	string strarr[20];
	int top=0, stack_size; 
public:
	Stack(int n) {
		stack_size = n;
		strarr[ stack_size ];
	};
	bool isEmpty() {
		if(top==0)
			return true;
		return false;
	};
	bool isFull() {
		if(top == stack_size )
			return true;
		return false;
	};
	void push( const string& s) {
		try {
			if( isFull() )
				throw("Stack is full! Can't add element");
			else{
				strarr[top]=s;
				top++;
			}
		} catch(const char* message){
			cerr<<message<<endl;
		}
	};
	string pop(string& s) {
		try {
			if( isEmpty() )
				throw("Stack is Empty! Must add elements first");
			else{
				top--;
				s = strarr[top];
				strarr[top] = "";
				return s;
			}
		} catch(const char* message){
			cerr<<message<<endl;
		}
	};
	void Display(){
		int i=0;
		while( strarr[i]!="" ){
			cout<<strarr[i]<<" ";
			i++;
		}
		cout<<endl;
	};
};

int main() {
	Stack z(3);

	z.push("l");
	z.Display();

	z.push("i");
	z.Display();

	z.push("t");
	z.Display();

	z.push("z");
	z.Display();
	
	string s=""; string a;
	a = z.pop(s);
	cout<<a<<" is string returned after pop!"<<endl;
	z.Display();

	return 0;
}