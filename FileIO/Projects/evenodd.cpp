#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string data;

	ifstream is;
	is.open(argv[1]);
	
	string even_line, odd_line;
	string even_data, odd_data;
	while(! is.eof() ) {
		getline( is, odd_line);
		odd_data += odd_line+"\n";
		getline( is, even_line);
		even_data += even_line+"\n";
	}
	ofstream es;
	es.open(argv[2]);
	es<<even_data;
	es.close();

	ofstream os;
	os.open(argv[3]);
	os<<odd_data;
	os.close();

	cout<<odd_data<<"\n---\n"<<even_data<<endl;
	return 0;
}