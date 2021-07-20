#include<iostream>
using namespace std;
class father{
	public:
	father()
	{
		cout<<"i am father, i got a new life"<<endl;
	}
	~father()
	{
		cout<<"I am father, i am going to die"<<endl;
	}
};
class mother{
	public:
	mother()
	{
		cout<<"i am mother, i got a new life"<<endl;
	}
	~mother()
	{
		cout<<"I am mother, i am going to die"<<endl;
	}
	
};
class child:public mother,public father{
	public:
		child()
		{
			cout<<"i am child,i got new life"<<endl;
		}
		~child()
		{
			cout<<"I am child, i am going to die"<<endl;
		}
		friend void destructTest(child* );
};
void destructTest(child* c) 
{ 
    delete c;  
} 
int main()
{
	child *c=new child;
	destructTest(c); 
}

