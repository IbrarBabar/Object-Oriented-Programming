#include<iostream>
using namespace std;
class parent{
	public:
	parent()
	{
		cout<<"i am Parent, i got a new life"<<endl;
	}
	~parent()
	{
		cout<<"I am Parent, i am going to die"<<endl;
	}
};
class child:parent{
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
