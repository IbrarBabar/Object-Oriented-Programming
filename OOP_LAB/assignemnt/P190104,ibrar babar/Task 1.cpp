#include<iostream>
#include<string>
using namespace std;
class employee
{
	public:
		int eno,age,ph[4];
		string name;
		float comp;
employee()
		{ cout<<"Contructor Created\n";
		eno=0;
		age=0;
		ph[0]=0;
		ph[1]=0;
		ph[2]=0;
		ph[3]=0;
		name="   ";
		comp=0.0;
		}
employee(int n,int a,int b[],string na,float com)
	    { cout<<"Contructor Created\n";
	     set(n,a,b,na,com);
		}
void set ()
		{
			setno();
			setname();
			setph();
			setage();
			setcomp();
	    }
			
void setno()
				{		
			cout<<"Enter Employee Number \n";
			cin>>eno;
			}		
void setname()
			{
			cout<<"Enter Employee's Name \n";
			cin>>name;
			}
void setph()
			{
			for(int i=0;i<4;i++)
			{
				cout<<"Enter Employee's "<<i+1<<" Phone Numbers \n";
				cin>>ph[i];
			}}
void setage()
			{
			cout<<"Enter Employee's Age \n";
			cin>>age;	
			}
void setcomp()
			{
			cout<<"Enter Employee's Compensation \n";
			cin>>comp;	
			}
void set(int n,int a,int b[],string na,float com)
		{ 
		eno=n;
		age=a;
		for(int i=0;i<4;i++)
		{
			ph[i]=b[i];
		}
		name=na;
		comp=com;
		}
int geteno()
		{ 
		return eno;
		}
int getage()
		{ 
		return age;
		}
string getname()
		{ 
		return name;
		}
float getcomp()
		{
		return comp;
		}
int getph1()
		{
		return ph[0];
		}
int getph2()
		{
		return ph[1];
		}
int getph3()
		{
		return ph[2];
		}
int getph4()
		{
		return ph[3];
		}
void print()	
		{
			cout<<"Employee Number = "<<eno<<endl;
			cout<<"Employee's Name = "<<name<<endl;
			cout<<"Employee's Age = "<<eno<<endl;
			cout<<"Employee's Phone Numbers are : \n";
			for(int i=0;i<4;i++)
			{
				cout<<ph[i]<<endl;
			}
			cout<<"Employee's Compensation = $"<<comp<<endl;
		}
		void updateno()
		{
			setno();
		}
		void updatename()
		{
			setname();
		}
		void updateage()
		{
			setage();
		}
		void updatecomp()
		{
			setcomp();
		}
		void updateph()
		{
			setph();
		}
void Update()
		{   int a=0;
		while(a!=9)
		{
			cout<<"Enter Number According to the entry you want to Update :\n\n";
			cout<<"1 for Updating Emplyee Number \n";
			cout<<"2 for Updating Emplyee's Name \n";
			cout<<"3 for Updating Emplyee's Age \n";
			cout<<"4 for Updating Emplyee's Compensation \n";
			cout<<"5 for Updating Emplyee's 1st Phone Number \n";
			cout<<"6 for Updating Emplyee's 2nd Phone Number \n";
			cout<<"7 for Updating Emplyee's 3rd Phone Number \n";
			cout<<"8 for Updating Emplyee's 4th Phone Number \n";
			cout<<"9 for Exit \n";
			cin>>a;
			if(a==1)
			{
				updateno();
			}
			if(a==2)
			{
				updatename();
			}
			if(a==3)
			{
				updateage();
			}
			if(a==4)
			{
				updatecomp();
			}
			if(a==5)
			{
				cout<<"Enter Employee's New 1st Phone Number \n";
				cin>>ph[0];
			}
			if(a==6)
			{
				cout<<"Enter Employee's New 2nd Phone Number \n";
				cin>>ph[1];
			}
			if(a==7)
			{
				cout<<"Enter Employee's New 3rd Phone Number \n";
				cin>>ph[2];
			}
			if(a==8)
			{
				cout<<"Enter Employee's New 4th Phone Number \n";
				cin>>ph[3];
			}
			if(a==9)
			{
				cout<<"Exiting.......\n";
				return;
			}
			else 
			cout<<"Please Enter Correct Option \n";
		};	
		}
~employee()
{  cout<<"Destructor Created \n";
}
};

int main()
{  employee *p=new employee[3];
	for(int i=0;i<3;i++)
	{ cout<<"Enter the Data for "<<i+1<<" employee\n\n";
	(p+i)->set();
	cout<<endl<<endl;
	(p+i)->print();
	cout<<endl<<endl;
	(p+i)->Update();
	cout<<endl;
	cout<<"After Update \n";
	(p+i)->print();
	cout<<endl<<endl;
}  
delete[] p;
	return 0;
}
