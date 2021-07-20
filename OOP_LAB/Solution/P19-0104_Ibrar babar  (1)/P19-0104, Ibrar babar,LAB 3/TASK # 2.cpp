#include<iostream>
using namespace std;
void abc(int a,int b,int c)
{
	 int z=a*a; 
	if(a!=b)
	{
		cout<<" * ";
		c++;
		b++;
		abc(a,b,c);
		if(b==a)
		{
			cout<<endl;
			if(c!=z)
			{
				b=0;
				abc(a,b,c);
			}
		}
	}
}
int main()
{
	int n1,n2=0,p=0;
	cout<<"Enter the Number for Square ";
	cin>>n1;
	abc(n1,n2,p);
	system("pause");
	return 0;
}