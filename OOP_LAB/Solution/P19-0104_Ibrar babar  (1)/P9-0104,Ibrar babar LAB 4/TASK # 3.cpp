#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,b;
	string** p = NULL;
	p=new string * [3];
	for(int i=0;i<2;i++)
	{
		p[i]= new string[3];
	}
	
	cout<<"Enter information of two persons"<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter name , father name and city of  persons "<<(i+1)<<endl;
		for(int j=0;j<3;j++)
		{
			cin>>*(p[i]+j);
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<< *(p[i]+j)<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}