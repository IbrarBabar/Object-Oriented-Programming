#include<iostream>
#include<string>
using namespace std;
class circleType
{
public:
void setRadius(double r);
double getRadius();
double area();
double circumference();
circleType(double r = 0);
void print()
{   
	cout<<"Radius = "<<radius<<endl;
	cout<<"Area = "<<area()<<endl;
	cout<<"Circumference = "<<circumference()<<endl;
}
private:
double radius;
};
void circleType::setRadius(double r)
{
if (r >= 0)
radius = r;
else
radius = 0;
}
double circleType::getRadius()
{ 
return radius;
}
double circleType::area()
{
return 3.1416 * radius * radius;
}
double circleType::circumference()
{
return 2 * 3.1416 * radius;
}
circleType::circleType(double r)
{
setRadius(r);
}
class cylinderType: public circleType
{
	private:
		double height;
		double cx;
		double cy;
	public:
void set1(double h)
	{	
		if(h>0)
		height=h;
		else 
		height=0;
	}	
void set2(double cx1,double cy1)
	{ 	
		cx=cx1;
	 	cy=cy1;
	}
double volume()
{   
	return area()*height;
}
double surfaceArea()
{
	return (2*3.1416*getRadius()*height)+(2*area());
}
};
int main()
{    double r,h,c1,c2,c3,c4;
	cout<<"Enter the Radius of Circle \n";
	cin>>r;
	cout<<"Enter the Height of Cylinder \n";
	cin>>h;
	cout<<"Enter the Shipping Cost per Litre \n";
	cin>>c1;
	cout<<"Enter the Paint Cost per square foot \n";
	cin>>c2;
	cylinderType C;
	C.setRadius(r);
	C.set1(h);
	c3=C.volume()/0.0353147;
	cout<<"Shipping Cost is = $"<<c3*c1<<endl;
	cout<<"Paint Cost is  =   $"<<C.surfaceArea()*c2<<endl;	
	return 0;
}