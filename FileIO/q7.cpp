#include <bits/stdc++.h>
using namespace std;

struct EMP {
	int emp_no, salary, dept_no;
	string name, job;
};

void Display(struct EMP a){
	cout<<"\t"<<a.emp_no<<" | "<<a.name<<" | "<<a.job<<" | "<<a.salary<<" | "<<a.dept_no<<endl;
};
string read(){
	string data, word;
	ifstream is; is.open("emp_database.txt");
	
	while( !is.eof() ){
		is>>word;
		data+=word+"\t";
	}
	is.close();
	
	return data;
};
void write(struct EMP a) {
	string data = read();

	ofstream os; os.open("emp_database.txt");
	os<<data;os<<"\n";
	os<<a.emp_no;os<<"\t";
	os<<a.name;os<<"\t";
	os<<a.job;os<<"\t";
	os<<a.salary;os<<"\t";
	os<<a.dept_no;
	os<<"\n";
	os.close();
};

int main() {
	for (int i = 0; i < 2; ++i)
	{
		struct EMP instance;
		cout<<"Enter emp_no: ";cin>>instance.emp_no;
		cout<<"Enter Name: ";cin>>instance.name;
		cout<<"Enter job: ";cin>>instance.job;
		cout<<"Enter salary: ";cin>>instance.salary;
		cout<<"Enter dept_no: ";cin>>instance.dept_no;

		Display(instance);
		write(instance);
	}
	cout<<read();
	return 0;
}