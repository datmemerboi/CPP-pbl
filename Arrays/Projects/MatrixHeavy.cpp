#include <bits/stdc++.h>
using namespace std;

int Weightage(int Matrix[3][3] )
{
	int i, j, corner=0, center=0, ott;
	for(i=0; i<3; ++i) {
		for(j=0; j<3;++j) {
			if(i==0 || i==2){
				if(j==i || j==(2-i)) {
					corner+=Matrix[i][j];
				}
				else {
					center+=Matrix[i][j];
				}
			}
			else {
				if(i==j)
					continue;
				else{
					center+=Matrix[i][j];
				}
			}
		}
	}

	if(corner==center)
		ott = 3;
	else
		corner>center? ott=1: ott=2;

	return ott;
}

int main() {

	int Matrix[3][3], i, j, ott;
	cout<<"Enter line seperated array elements..."<<endl;
	for(i=0; i<3; ++i){
		for(j=0; j<3;++j){
			cin>>Matrix[i][j];
		}
	}

	ott = Weightage(Matrix);
	cout<<ott<<endl;
	return 0;
}