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
	void Shipping_Cost(double Ship_cost);
	void Paint_Cost(double cost_of_painting);
	private:
		double height;
		double Ship_cost;
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
void cylinderType::Shipping_Cost(double Ship_cost)
{
	 cout<<"The shipping Cost of container is :: "<<(((area()*height)/0.353)*Ship_cost)<<"$"<<endl;
}
void cylinderType::Paint_Cost(double cost_of_painting)
{
	cout<<"The Painting Cost of container is :: "<<(((circumference()*height)+(2*area()))*cost_of_painting)<<"$"<<endl;
}
int main()
{
	cylinderType object;
	double radius,height,shipping_cost,paint_cost;
	cout<<"Please enter the radius of the base of container :: ";
	cin>>radius;
	cout<<"Please enter the height of the container :: ";
	cin>>height;
	cout<<"Please enter shipping cost per liter :: ";
	cin>>shipping_cost;
    cout<<"Please enter the paint cost per square foot :: ";
	cin>>paint_cost;
	object.setRadius(radius);
	object.set_height(height);
	object.Shipping_Cost(shipping_cost);
	object.Paint_Cost(paint_cost);
	system("pause");
	return 0;
}