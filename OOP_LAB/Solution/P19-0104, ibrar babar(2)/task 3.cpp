#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x[5];
	int y[5];
	cout<<"Enter the values of first array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>x[i];
	}

	for(int i=0;i<5;i++)
	{
		*(y+i) = *(x+i);
	}
	cout<<"the duplicate of first array is "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*(y+i)<<endl;
	}
	system("pause");
	return 0;
}