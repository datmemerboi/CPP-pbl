#include <bits/stdc++.h>
using namespace std;

class Student {
private:
	int admno; char sname[20]; float eng, math, science;
	float total;
	float ctotal(){
		return(eng+math+science);
	};
public:
	void Readdata(int a, char n[20], float e, float m, float s) {
		admno = a; eng = e; math = m; science = s;
		for (int i = 0; i < 20; ++i)
		{
			sname[i] = n[i];
		};
		total = ctotal();
	};
	void Displaydata(){
		cout<<admno<<" | "<<sname<<endl;
		cout<<"Eng: "<<eng<<", Math: "<<math<<", Sci: "<<science<<endl;
		cout<<"Total: "<<total<<endl;
	}
};
int main() {
	Student barath;
	barath.Readdata(201283, "Barath", 60, 80, 78);
	barath.Displaydata();
	
	return 0;
}