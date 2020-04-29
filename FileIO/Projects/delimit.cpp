#include <bits/stdc++.h>
using namespace std;

void NoDelim(char from[], char to[]) {
	fstream one; fstream two;
	one.open(from); two.open(to);
	
	string one_line, two_line;
	string data;
	
	while( !one.eof() && !two.eof() ){
		getline(one, one_line);
		getline(two, two_line);
		data += one_line+"\t"+two_line+"\n";
	};
	one.close(); two.close();

	ofstream closer;
	closer.open("together.txt");
	closer<<data;
	closer.close();
}
void Delim(string delimit, char from[], char to[]) {
	fstream one; fstream two;
	one.open(from); two.open(to);
	
	string one_line, two_line;
	string data;
	
	while( !one.eof() && !two.eof() ){
		getline(one, one_line);
		getline(two, two_line);
		data += one_line+delimit+two_line+"\n";
	};
	one.close(); two.close();

	ofstream closer;
	closer.open("together.txt");
	closer<<data;
	closer.close();
}

int main(int argc, char *argv[])
{
	
	if( strlen(argv[1])>3 )
		NoDelim(argv[1], argv[2]);
	else{
		string part(argv[1]);
		part.replace(0,2,"");
		Delim(part, argv[2], argv[3]);
	}
	return 0;
}