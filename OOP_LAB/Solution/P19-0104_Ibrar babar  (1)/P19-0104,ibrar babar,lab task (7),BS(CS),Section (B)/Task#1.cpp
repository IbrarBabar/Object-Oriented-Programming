#include<iostream>
#include<string>
using namespace std;
class circleType
{
public:
void setRadius(double r);
//Function to set the radius.
//Postcondition: if (r >= 0) radius = r;
//otherwise radius = 0;
double getRadius();
//Function to return the radius.
//Postcondition: The value of radius is returned.
double area();
//Function to return the area of a circle.
//Postcondition: Area is calculated and returned.
double circumference();
//Function to return the circumference of a circle.
//Postcondition: Circumference is calculated and returned.
circleType(double r = 0);
//Constructor with a default parameter.
//Radius is set according to the parameter.
//The default value of the radius is 0.0;
//Postcondition: radius = r;
void print_funtions_of_circle()
{
	cout<<"The radius of circle is :: "<<radius<<endl;
	cout<<"The area of the circle is :: "<<area()<<endl;
	cout<<"The circumference of the circle is :: "<<circumference()<<endl;
}
private:
double radius;

};
void circleType::setRadius(double r)
{
	if (r >= 0)
	{
		radius = r;
	}
	else
	{
		radius = 0;
	}
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
class cylinderType : public circleType
{
public:
	void set_height(double h);
	void Set_coordinates(double X_CORDINATE, double Y_COORDINATE);
	double Volume();
	double SurfaceArea();
void print_cylinder_funtions()
{
		cout<<"The volume of the cylinder is :: "<<Volume()<<endl;
		cout<<"The surace area of the cylinder is :: "<<SurfaceArea()<<endl;
}
	private:
		double X_coordinate;
		double Y_coordinate;
		double height;
};
void cylinderType::set_height(double h)
{
	if (h >= 0)
	{
		height = h;
	}
	else
	{
		height = 0;
	}
}
void cylinderType::Set_coordinates(double X_CORDINATE, double Y_COORDINATE)
{
		X_coordinate= X_CORDINATE;
		Y_coordinate=Y_COORDINATE;
}
double cylinderType::Volume()
{
	return (area()*height);
}
double cylinderType::SurfaceArea()
{
	return ((circumference()*height)+(2*area()));
}


int main()
{
	cylinderType object;
	double radius,height,X_coordinate,Y_coordinate;
	cout<<"Please enter the radius of the circle :: ";
	cin>>radius;
	cout<<"Please enter the height of the circle :: ";
	cin>>height;
	cout<<"Please enter the X_coordinate of the circle :: ";
	cin>>X_coordinate;
    cout<<"Please enter the Y_coordinate of the circle :: ";
	cin>>Y_coordinate;
	object.setRadius(radius);
	object.print_funtions_of_circle();
	object.set_height(height);
	object.print_cylinder_funtions();
	system("pause");
	return 0;
}


