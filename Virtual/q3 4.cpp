#include <bits/stdc++.h> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      };
      int perim() {
			cout<<"Parent class perim:"<<(width*height)<<endl;
			return(width*height);
		};

};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :"<<(width * height)<<endl;
         return (width * height); 
      };
      int perim() {
			cout<<"Rectangle perim:"<<(2*width*height)<<endl;
			return(2*width*height);
		};
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :"<<(width * height / 2)<<endl;
         return (width * height / 2); 
      };
      int perim() {
			cout<<"Triangle perim:"<<(2*width*height)<<endl;
			return(2*width*height);
		};
};

class Circle: public Shape {
	int radius;
	public:
		Circle( int a =0 ){
			radius = a;
		}

		int area() {
			cout << "Circle class area :"<<(3.14 * radius * radius)<<endl;
			return (3.14 * radius * radius); 
		};
		int perim() {
			cout<<"Cicle perim:"<<(2*3.14*radius)<<endl;
			return(2*3.14*radius);
		}
};
int main() {

   Rectangle rec(20,4);
   Triangle  tri(7, 5);
   Circle cir(7);
   rec.area();
   tri.area();
   cir.area();
cout<<endl;
   rec.perim();
   tri.perim();
   cir.perim();
cout<<endl;
   Shape *s;
   s = &cir;
   s->area();
   s->perim();
   return 0;
}