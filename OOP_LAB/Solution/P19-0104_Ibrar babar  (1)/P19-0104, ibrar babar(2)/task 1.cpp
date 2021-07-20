#include<iostream>
#include<string>
using namespace std;
int sum(int* a[5])
{
	int x=0;
	for(int i=0;i<5;i++)
	{
		x=x+*a[i];
	}
	return x;
}
int fun(int* b[5], int (*sum)(int* v[5]))
{
	int y=0;
	y= (*sum)(b);
	return y;
}
int main()
{
	int sum1;
	int a[5]={1,2,3,4,5};
	int* b[5];
	for(int i=0;i<5;i++)
	{
		b[i]=&a[i];
	}
	sum1=fun(b, sum);
	cout<<"The sum of the array is = "<<sum1<<endl;
	system("pause");
	return 0;
}