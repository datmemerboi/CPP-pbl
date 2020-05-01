#include <bits/stdc++.h>
using namespace std;

class Date {
	int day; int mth; int year;
public:
	Date(){
		cout<<"!! Constructed !!"<<endl;
		day=0; mth=0; year=0;
	}
	Date( int d, int m, int y ){
		cout<<"!! Constructed !!"<<endl;
		day = d; mth = m; year=y;
	}
	void showDate(){
		cout<<day<<"/"<<mth<<"/"<<year<<endl;
	}
	friend Date copyDate(Date d);
};
Date copyDate(Date d)
{
	Date d1 = d;
	return  d1;
}

int main() {
	Date d1(20, 04, 2020), d2;
	d1.showDate();
	d2 = copyDate(d1);
	d2.showDate();

	return 0;
}