#include <bits/stdc++.h>
using namespace std;

int main() {
	string data[10];

	ifstream infile;
	infile.open("unformatted.txt"); 

	ofstream outfile;
	outfile.open("formatted.txt");
	for (int i = 0; i < 10; ++i)
	{
		infile >> data[i];
	}
	infile.close();
	for (int i = 0; i < 5; ++i)
	{
		outfile << data[i] <<"\t|\t";
		outfile<<data[(i+5)]<<endl;
	}
}