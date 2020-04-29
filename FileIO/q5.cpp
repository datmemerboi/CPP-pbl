#include <bits/stdc++.h>
using namespace std;

void copy(char from[], char to[]) {
	ifstream is;
	is.open("from.txt");
	string data;
	string word;
	while( !is.eof() ){
		is>>word;
		data+=word+" ";
	}
	is.close();

	ofstream os;
	os.open("to.txt");
	os<<data;
	os.close();

}

int main(int argc, char *argv[])
{
	copy( argv[1], argv[2]);
	return 0;
}