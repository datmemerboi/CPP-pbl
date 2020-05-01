#include <bits/stdc++.h>
using namespace std;

class Date
{
	int day;
	int mth;
	int year;
public:
	Date(){
		day=0; mth=0; year=0;
	}
	Date( int d, int m, int y ){
		day = d; mth = m; year=y;
	}
	friend int adder(Date arg, int a);
	Date operator + (int a) {
		Date some;
		some.day = adder(this->day, a);
		// Date some(this->day, this->mth, this->year);
		// some.day = this->day+a;
		return some;
	}
	friend void showDate(Date arg);
};
int adder(int b, int a){
	return (b+a);
}
void showDate(Date arg){
	cout<<arg.day<<"/"<<arg.mth<<"/"<<arg.year<<endl;
}
int main() {
	Date d1(20, 04, 2020);
	showDate(d1);
	Date d2;
	d2 = d1 + 1;
	showDate(d2);

	return 0;
}