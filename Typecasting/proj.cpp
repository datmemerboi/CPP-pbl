#include <bits/stdc++.h>
using namespace std;

int SIZE = 100;
vector<int> MainArray;

void CreateArray(int argument){
	SIZE = argument;
	MainArray[SIZE];
}

void AppendArray(int argument){
	MainArray.push_back( argument );
}

void PrintArray(){
	for (int i = 0; i < SIZE; ++i)
	{
		cout<<MainArray[i]<<endl;
	}
}

void PopArray(){
	MainArray.pop_back();
}

void Replace(int index, int value) {
	MainArray[index] = value;
}
int main(int argc, char** argv) {
	int i=1;
	while( i<argc ){
		if( argv[i]=='C' ){
			CreateArray( argv[i+1] );
			i+=2;
		}
		if( argv[i]=='A'){
			AppendArray( argv[i+1] );
			i+=2;
		}
		if( argv[i]=='P') {
			PrintArray();
			i++;
		}
		if( argv[i]=='D'){
			PopArray();
			i++;
		}
		if(argv[i]=='R'){
			Replace(argv[i+1], argv[i+2]);
			i+=3;
		}
		if(argv[i]=='E'){
			delete[] MainArray;
		}
	}
	return 0;
}