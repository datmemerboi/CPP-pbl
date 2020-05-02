#include <bits/stdc++.h>
using namespace std;

class Rect {
	float tx, ty;
	float bx, by;
public:
	Rect(float a, float b, float c, float d) {
		tx = a; ty = b; bx = c; by = d;
	}
	float GetWidth(){
		return (bx-tx);
	}
	float GetHeight(){
		return (ty-by);
	}
	void SetWidth( float width ){
		float current = GetWidth();
		current>width ? bx=(current-width) : bx=(width-current);
	}
	void SetHeight( float height ){
		float current = GetHeight();
		current>height ? by=(current-height) : by=(height-current);
	}
};

int main() {
	Rect res(1, 4, 1, 2);
	res.SetWidth( 3 );
	res.SetHeight( 5 );

	return 0;
}