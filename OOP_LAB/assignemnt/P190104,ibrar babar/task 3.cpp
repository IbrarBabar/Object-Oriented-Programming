#include<iostream>
using namespace std;
class metrix
{
	int transpose,symetric=0,un_symetric=0;
	int x[3][3],y[3][3],z[3][3];
	public:
		void in()
		{
			cout<<"enter the metrix of x:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>x[i][j];
		}
	}
		}
		void show()
		{
			for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<x[i][j]<<"\t";
		}
		cout<<endl;
	}
		}
		void transpose()
		{
				cout<<"the transpose of metrix X ix:"<<endl;
	for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<x[j][i]<<"\t";
			}
			cout<<endl;
			}
		}
		void symmetric()
		{
			cout<<"to check symmetric is :"<<endl;
	for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(x[j][i]=x[i][j])
				{
					cout<<"the metrix is symmetric"<<symetric<<endl;
		        
				}
				else
				{
					cout<<"the metrix is not "<<un_symetric<<endl;
				}
                
			}
	}
		}
		void multiply()
		{
			cout<<"the multiplication of x and y metrix is"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			multiply=0;
			for(int k=0;k<3;k++)
			multiply=multiply+x[i][k]*y[k][j];
			z[i][j]=multiply;
		}
	}
		
		for(int k=0;k<3;k++)
		{
			for(int l=0;l<3;l++)
			{
			cout<<z[k][l]<<"\t";
			}
			cout<<endl;
		}
		}
};
int main()
{
	metrix s;
	s.in();
	s.show();
	s.transpose();
	s.symmetric();
	s.multiply();
	return 0;
}
