#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class ClockType
{
private:
	int hour;
	int minute;
	int second;
public:
	ClockType()//constructor
	{
		cout<<"Constructor!!!"<<endl;
		minute=0;
		second=0;
		hour=0;
	}
	ClockType(int SECOND,int MINUTE,int HOUR)
	{
		cout<<"Parametric Constructor !!!"<<endl;
		second = SECOND;
		minute = MINUTE;
		hour = HOUR;
	}
	ClockType(const ClockType& CLOCK)
	{
		cout<<"Copy Constructor !!!"<<endl;
		second=CLOCK.second;
		minute=CLOCK.minute;
		hour=CLOCK.hour;
	}
	void enter_Clock_Time()
	{
		do
		{
			cout<<"Enter the houres between (1 to 24) :: ";
		cin>>hour;
		if(hour>=24)
		{
			cout<<"Please enter houres between (1 to 24) :: ";
			cin>>hour;
		}
		}
		while(!(hour<=24));

		do
		{
			cout<<"Enter the Minutes between (1 to 60) :: ";
		cin>>minute;
		if(minute>=60)
		{
			cout<<"Please enter houres between (1 to 60) :: ";
			cin>>minute;
		}
		}
		while(!(minute<=60));
		
		do
		{
			cout<<"Enter the second between (1 to 60) :: ";
		cin>>second;
		if(second>=60)
		{
			cout<<"Please enter second between (1 to 60) :: ";
			cin>>minute;
		}
		}
		while(!(second));
	}
	void show_time ()
	{
		cout<<"Hour :: Minute :: Second "<<"   "<<hour<<" : "<<minute<<" : " <<second<<endl;
	}
	bool operator == (const ClockType& C)
	{
		if(hour == C.hour && minute == C.minute && second == C.second)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator = (const ClockType &CL)
	{
		hour=CL.hour;
		minute=CL.minute;
		second = CL.second;
		return (hour,minute,second);
	}

	friend ostream &operator<<( ostream &output, const ClockType &CLO )
	{
		output<<"Hour :: Minute :: Second "<<CLO.hour<<" : "<<CLO.minute<<" : "<<CLO.second<<endl;
		return output;
	}
};
int main()
{
	ClockType object;
	ClockType object1=object;
	cout<<endl;
	cout<<"Enter the Time for Object (1)"<<endl;
	object.enter_Clock_Time();
	object.show_time();
	cout<<endl;
	cout<<"Enter the time of object (2)"<<endl;
	object1.enter_Clock_Time();
	object1.show_time();
	cout<<endl;
	if(object==object1)
	{
		cout<<"Timing of both Clock is match"<<endl;
	}
	else
	{
		cout<<"Timing of both Clock is different "<<endl;
	}
	cout<<"Assign time of Clock (1) to Clock of (2)"<<endl;
	object1=object;
	cout<<object<<endl;
	system("pause");
	return 0;
}
