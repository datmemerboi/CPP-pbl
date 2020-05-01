#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
	int day;
	int mth;
	int year;
public:
	Date operator + (int n){
		Date some(this->day, this->mth, this->year);

		some.day = this->day+(n%30);
		
		if( n>29)
			some.mth = this->mth+(n/30);
		if( n>365 )
			some.year = this->year+(n/365);
		return some;
	};
	Date operator - (int n){
		Date some(this->day, this->mth, this->year);

		some.day = this->day-(n%30);
		
		if( n>29)
			some.mth = this->mth-(n/30);
		if( n>365 )
			some.year = this->year-(n/365);
		return some;
	};
	void dayFn(int d){ day = d; }
	void monthFn(int m){ mth = m; }
	void yearFn(int y){ year = y; }

	void getDate() {
		cout<<day<<"/"<<mth<<"/"<<year;
	}
	Date(){
		cout<<"Constructer!"<<endl;
		dayFn(0); monthFn(0); yearFn(0);
	}
	Date(int d, int m, int y){
		dayFn(d); monthFn(m); yearFn(y);
	}
};

int main() {
	int num;
	cout<<"Enter number of days to increment: "; cin>>num;
	
	Date d1(10, 05, 2020);
	d1.getDate();cout<<" before.."<<endl;
	d1 = d1+num;
	d1.getDate();cout<<" after.."<<endl;
	
	cout<<"Enter number of days to decrement: "; cin>>num;
	Date d2(20, 04, 2020);
	d2.getDate();cout<<" before.."<<endl;
	d2 = d2-num;
	d2.getDate();cout<<" after.."<<endl;

	return 0;
}