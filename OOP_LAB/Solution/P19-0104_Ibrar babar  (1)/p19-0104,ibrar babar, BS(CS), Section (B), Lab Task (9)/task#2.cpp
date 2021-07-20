#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Number
{
private:
	int number;
public:
	Number()
	{
		cout<<"Constructor"<<endl;
		number=0;
	}
	void Input_number()
	{
		do
		{
			cout<<"Enter a number between (1 to 100) :: ";
			cin>>number;
			if(number>=100)
			{
				cout<<"Please enter number between (1 to 100) :: ";
				cin>>number;
			}
		}
		while(!(number<=100));
	}
	bool operator > (const Number& N)
	{
		if(number>N.number)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator < (const Number& n)
	{
		if(number<n.number)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator == (const Number& n)
	{
		if(number==n.number)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator != (const Number& n)
	{
		if(number != n.number)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator = (const Number &n)
	{
		(number = n.number);
		return (number);
	}
	void out()
	{
		cout<<"The number is :: "<<number<<endl;
	}
};
int main()
{
	int n;
	Number object;
	Number object1;
	cout<<"Enter 1st Number"<<endl;
	object.Input_number();
	cout<<endl;
	cout<<"Enter 2nd Number"<<endl;
	object1.Input_number();
	cout<<endl;
	object>object1;
	if(object>object1)
	{
		cout<<"1st number > 2nd number"<<endl;
	}
	else
	{
		cout<<"1st number is not greater then 2nd number"<<endl;
	}
	object<object1;
	if(object<object1)
	{
		cout<<"1st number < 2nd number"<<endl;
	}
	else 
	{
		cout<<"2nd number is not greater then 1st number"<<endl;
	}
	object==object1;
	if(object==object1)
	{
		cout<<"1st Number == 2nd Number"<<endl;
	}
	else
	{
		cout<<"Both numbers are not equal"<<endl;
	}
	object != object1;
	if(object != object1)
	{
		cout<<"1st Number != 2nd Number"<<endl;
	}
	else
	{
		cout<<"Both Numbers are equal"<<endl;
	}
	cout<<"Before swapping Values are "<<endl;
	object.out();
	object1.out();
	cout<<"After swapping Values are"<<endl;
	object1.out();
	object1 = object;
	object.out();
	system("pause");
	return 0;
}