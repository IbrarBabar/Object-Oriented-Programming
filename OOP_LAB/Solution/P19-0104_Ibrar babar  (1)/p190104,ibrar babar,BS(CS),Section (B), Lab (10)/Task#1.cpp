#include <iostream>
using namespace std;
class Shape
{
 protected:
	 int width, height;
 public:
	Shape( int a = 0, int b = 0)
	{
	width = a;//constructor
	height = b;
	}
	virtual int area()
	{
	 cout << "Parent class area :" <<endl;
	 return 0;
	}
};
class Rectangle: public Shape {
 public:
	Rectangle( int a = 0, int b = 0):Shape(a, b) { }

 int area () 
 {
	 int rac;
 cout << "Rectangle class area :" <<endl;
 rac= (width * height);
 cout<<"Ractangle area :: "<<rac<<endl;
 return rac;
 }
};
class Triangle: public Shape 
{
 public:
 Triangle( int a = 0, int b = 0):Shape(a, b) { }
 int area ()
 {
	 int tri;
 cout << "Triangle class area :" <<endl;
 tri= (width * height / 2);
 cout<<"triangel area :: "<<tri<<endl;
 return tri;
 }
};
class square : public Shape
{
private:
	int length;
	int width;
public:
	square(int L,int W)
	{
		length=L;
		width=W;
	}
	int area()   //a funtion that print and return area of square
	{
		int sq;
		cout<<"Square class area :"<<endl;
		sq= (2*length)+(2*width);
		cout<<"The Area of square is :: "<<sq<<endl;
		return sq;
	}
};
int main() 
{
	 Shape *shape;
	Rectangle rec(10,7);
	shape = &rec;          // call rectangle area.
	shape->area();        // store the address of Triangle
	cout<<endl;
	Triangle tri(10,5);   // store the address of Rectangle
	shape = &tri;        // call triangle area.
	shape->area();
	cout<<endl;
	square sq(10,6);   // store the address of Rectangle
	shape = &sq;		// call triangle area.
	shape->area();
	system("pause");
	return 0;
}
