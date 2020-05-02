#include <bits/stdc++.h>
using namespace std;

class Time {
	int hours, minutes, seconds;
public:
	Time(){	hours = minutes = seconds = 0; }
	Time(int h, int m, int s) { hours = h; minutes=m; seconds=s; }
	int getHour() {	return hours; }
	int getMin() {	return minutes; }
	int getSec() {	return seconds; }
	void setHour(int h) {	hours = h; }
	void setMin(int m){	minutes = m; }
	void setSec(int s){	seconds = s; }
	Time difference(Time t2) {
		Time temp;

		this->hours>t2.hours ? temp.hours=(this->hours-t2.hours) : temp.hours=(t2.hours-this->hours);
		this->minutes>t2.minutes ? temp.minutes=(this->minutes-t2.minutes) : temp.minutes=(t2.minutes-this->minutes);
		this->seconds>t2.seconds ? temp.seconds=(this->seconds-t2.seconds) : temp.seconds=(t2.seconds-this->seconds);

		return temp;
	}
	int compare(Time t2) {
		if(this->hours == t2.hours && this->minutes == t2.minutes && this->seconds == t2.seconds)
			return 1;
		return 0;
	}
	void Display() {
		cout<< this->hours<<":"<< this->minutes<<":"<< this->seconds<<endl;
	}
};

int main() {
	Time once(23, 9, 33);
	once.Display();
	once.setSec(35);
	once.Display();

	Time twice = once;
	twice.Display();
	
	cout<<once.compare(twice)<<endl;
	
	twice.setHour(2); twice.setMin(29); twice.setSec(33);
	twice.Display();

	Time diff = once.difference(twice);
	diff.Display();
}