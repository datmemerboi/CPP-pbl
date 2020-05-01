#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
	int day;
	int mth;
	int year;
public:
	Date operator ++ () {
		Date some(this->day, this->mth, this->year);

		if(this->day == 30){
			some.day = 1;
			if(this->mth == 12){
				some.mth = 1;
				some.year = this->year+1;
			}
			else{
				some.mth = this->mth+1;
			}
		}
		else{
			some.day = this->day+1;
		}
		return some;
	};
	Date operator -- () {
		Date some(this->day, this->mth, this->year);

		if(this->day == 1) {
			some.day = 30;
			if(this->mth == 1) {
				some.mth = 12;
				some.year = this->year-1;
			}
			else{
				some.mth = this->mth-1;
			}
		}
		else{
			some.day = this->day-1;
		}
		return some;
	};

	void dayFn(int d){ day = d; }
	void monthFn(int m){ mth = m; }
	void yearFn(int y){ year = y; }

	void getDate() {
		cout<<day<<"/"<<mth<<"/"<<year<<endl;
	}
	Date(){
		cout<<"Constructer!"<<endl;
		dayFn(0); monthFn(0); yearFn(0);
	}
	Date(int d, int m, int y){
		dayFn(d); monthFn(m); yearFn(y);
	}
};

int main(){
	Date d1(20, 04, 2020), d2(10, 07, 2019);
	Date d5;
	d1.getDate();
	d1 = --d1;
	d1.getDate();

	d2.getDate();
	d5 = --d2;
	d5.getDate();
}