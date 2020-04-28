#include <bits/stdc++.h>
using namespace std;

class Sample {
	int intdata; string stringdata;
public:
	Sample() {
		cout<<"---Item created---"<<endl;
	};
	~Sample() {
		cout<<"---Item destructed---"<<endl;
	};
	void setData(int arg) {
		intdata = arg;
	};
	void setData(string arg) {
		stringdata = arg;
	};
	void getData() {
		cout<<"intdata: "<<intdata<<endl;
		cout<<"stringdata: "<<stringdata<<endl;
	};
	void charAt(int index) {
		cout<<stringdata[index]<<" is the char."<<endl;
	};
	void reversal() {
		int rev = 0, copy = intdata;
		while(copy>0){
			rev*=10;
			rev += (copy%10);
			copy/=10;
		}
		cout<<rev<<" is reverse."<<endl;
	};
};

int main() {
	Sample s;
	
	s.setData(3001);
	s.setData("foobar");
	s.charAt(3);
	s.reversal();

	return 0;
}