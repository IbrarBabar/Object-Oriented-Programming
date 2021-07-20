#include<iostream>
using namespace std;
 getnew(int&a,int*& ptr)
{ 
	cout<<"Enter a value for size of array \n";
	cin>>a;
	ptr= new int[a];
}
void init(int &a,int*&ptr)
{
		
	for(int i=0;i<a;i++)
	{
		cout<<"Enter value "<<(i+1)<<" : ";
	  	cin>>*(ptr+i);
	}	
}
void print(int &a,int*&ptr)
{ 
	cout<<"The output of the given values are "<<endl;
	for(int i=0;i<a;i++)
	{  	
	cout<<"The value "<<(i+1)<<" : "<<*(ptr+i)<<endl;
	}
}
void del(int*&ptr)
{ 
	delete[] ptr;
}
int main()
{ 
	int* ptr;
	int a;
	getnew(a,ptr);
	init(a,ptr);
	print(a,ptr);
	del(ptr);
	system("pause");
	return 0;
}
