#include <bits/stdc++.h>
using namespace std;

class Base { };
class Der : public Base { };

int main(){
	Base *bptr;
	Der *dptr;

	if (typeid(bptr) == typeid(Der)) {
		cout << "Identical" << endl;
		cout<<typeid(bptr).name()<<" "<<typeid(Der).name()<<endl;
	}
	else{
		cout << "Non-Identical" << endl;
		cout<<typeid(bptr).name()<<" "<<typeid(Der).name()<<endl;
	}

	return 0;
}