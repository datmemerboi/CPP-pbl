#include <bits/stdc++.h>
using namespace std;

#define SIZE 3

class Vector 
{
	int A[ SIZE ];
public:
	Vector operator / ( Vector v ){
		Vector some;
		for (int i = 0; i < SIZE; ++i)
		{
			if( v.A[i]==0)
				throw("Division by zero error!");
			else
				some.A[i] = ( this->A[i]/v.A[i] );
		}
		return some;
	};
	void Put ( int index, int k ){
		A[index] = k;
	};
	void Display (){
		for (int i = 0; i < SIZE; ++i)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl;
	};
};

int main() {
	Vector z;
	z.Put(0,10);z.Put(1,10);z.Put(2,10);
	z.Display();

	Vector y;
	y.Put(0, 5); y.Put( 1, 3 ); y.Put(2, 2);
	y.Display();

	Vector x;
	try {
		x = z/y;
	} catch( const char* message){
		cerr<<message<<endl;
	}
	x.Display();
}