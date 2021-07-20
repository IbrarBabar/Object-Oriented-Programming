#include<iostream>
using namespace std;
void print(int x,int y)
{
	if(y < 11)
	{
		 cout<< x <<" * "<< y << " = " << x*y <<endl;
		 y++;
		 print(x,y);
	}
	if(x==10)
		return;
}
int main()
{
	int a,b=1;
	cout<<"Enter a number for table "<<endl;
	cin>>a;
	print(a,b);
	system("pause");
	return 0;
}
