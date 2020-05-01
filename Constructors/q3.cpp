#include <bits/stdc++.h>
using namespace std;

class Sample {
private:
    int x;
    double y;
public :
    Sample(){
    	x = 0; y=0;
    };
    Sample(int param){
    	x = param; y = 0;
    };
    Sample(int a, int b){
    	x = a; y = b;
    }
    Sample(int a, double b) {
    	x = a; y = b;
    }
    void showData(){
    	cout<<x<<" "<<y<<endl;
    }
};
int main() {
	Sample p, q(1), r(2, 3), s(20, 202020);
	p.showData();
	q.showData();
	r.showData();
	s.showData();
	return 0;
}