#include<iostream>
#include<string>
using namespace std;
int main()
{
	int **p;
	int column;
	int row;
	cout<<"Enter the nmber of rows : ";
	cin>>row;
	cout<<"Enter the number of colums : ";
	cin>>column;
	p=new int*[row];
	for (int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			p[i]=new int[column];
		}
	}
	//initialize
	for (int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			*(*(p+i)+j)=rand();  //rand() used to print random values 
		}
	}
	//print
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cout<< *(*(p+i)+j)<<" ";
		}
		cout<<endl;
	}

	
	system("pause");
	return 0;
}