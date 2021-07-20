#include <iostream>
using namespace std;
class Person
{
public:
	virtual void introduction()
	{
		cout<<"Hyye from Person "<<endl;
	}
};
class Student : public Person
{
public:
	void introduction()
	{
		cout<<"Hyye from Student "<<endl;
	}
};
class Farmer : public Person
{
public:
	void introduction()
	{
		cout<<"Hyye from Farmer "<<endl;
	}
};

void introduction(Person &p)
{
	p.introduction();
}
int main() 
{
	 Person P;
	 Student S;
	 Farmer F;

	 introduction(P);
	 introduction(S);
	 introduction(F);
	system("pause");
	return 0;
}
