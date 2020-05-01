#include <bits/stdc++.h>
using namespace std;
int MAX = 100;
class Bitset {
public:
	Bitset(int size){
		MAX = size;
		array[MAX];
		// cout<<size<<"::";
	};

	void setbit( int index ) {
		array[index] = 1;
		// cout<<array[index]<<"::";
	};
	void setbit( int index, int val) {
		array[index] = val;
		// cout<<array[index]<<"::";
	};
	void clearbit( int index ){
		array[index] = 0;
		// cout<<array[index]<<"::";
	};
	void togglebit( int index ){
		array[index] = !(array[index]);
		// cout<<array[index]<<"::";
	};
	void getbit( int index ){
		cout<<array[index]<<endl;
	};
	void print(){
		int i=0;
		while(i<MAX){
			cout<<i<<"->"<<array[i]<<endl;
			i++;
		}
	};
private:
	int array[100];
};
int main() {
	Bitset con(5);
	
	con.setbit(0); con.setbit(1, 1); con.setbit(2); con.setbit(3, 1);
	con.clearbit(4);
	cout<<"Creation:"<<endl;
	con.print();

	cout<<"Manipulation:"<<endl;
	con.clearbit(1); con.clearbit(3);
	con.togglebit(2); con.togglebit(4);
	
	con.print();

	return 0;
}