#include <bits/stdc++.h>
using namespace std;
template <class T>
class Vector { 
   private: 
      T A[10]; 

   public: 
	Vector ( );
	T sum ( );
	T max ( );
	T min ( );
	void sort ( );
	~Vector ( );
};
T Vector<T>::sum() {
	T sum = 0;
	for (int i = 0; i < 10; ++i)
	{
		sum += A[i];
	}
	return sum;
}
T Vector<T>::max() {
	T maxim = 0;
	for (int i = 0; i < 10; ++i)
	{
		if(A[i]>maxim)
			maxim = A[i];
	}
	return maxim;
}
T Vector<T>::min() {
	T minim = 1000;
	for (int i = 0; i < 10; ++i)
	{
		if(A[i]<minim)
			minim = A[i];
	}
	return minim;
}

