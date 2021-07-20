#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct menuItem
{
	string name;
	int Quantity;
	string Waittime;
	float Tex,Charges;
	char  in[5];
};
void getData(menuItem menuList[],int n)
{    
	ifstream in;
	in.open("data.txt");
	for(int i=0;i<n;i++)
	{   
		 in>>menuList[i].name;
		 in>>menuList[i].Quantity;
		 in>>menuList[i].Tex;
		 in>>menuList[i].Waittime;
		 in>>menuList[i].Charges;
		 for(int j=0;j<5;j++)
		 {
		 	in>>menuList[i].in[j];
		 }
	}
}
void showMenu(menuItem menuList[],int n)
{
	cout<<"Welcome to Johnny's Restaurant :"<<endl;
	cout<<"           "<<endl;
	cout<<"Name of Item"<<"\t"<< "Quantity"<<"\t"<<"tax"<<"\t"<<"Waitingtime"<<"\t"<< "Charges"<<"\t"<<"Ingredients"<<endl;
	for(int i=0;i<n;i++)
	{    cout<<i+1<<": ";
		 cout<<menuList[i].name<<"\t"<<menuList[i].Quantity<<"\t\t"<<menuList[i].Tex<<"\t"<<menuList[i].Waittime<<"\t\t"<<menuList[i].Charges<<"\t";
		 for(int j=0;j<5;j++)
		 {
		 	cout<<menuList[i].in[j];
		 }cout<<endl;
	}
	cout<<"Press desired number from list "<<endl;
}
void printCheck(menuItem menuList[],int n)
{  
	int option,quantity,d[9]={0,0,0,0,0,0,0,0,0},
	counter=0,actual_quantity[9]={0,0,0,0,0,0,0,0,0};
	char k;
	float bill=1.0,total_bill=0.0;
	do
	{ 
    	showMenu(menuList,n);
    	cin>>option;
    	d[counter]=option;
    	cout<<"Enter the Quantity of the Item ";
    	cin>>quantity;
    		actual_quantity[counter]=quantity;
		  bill=(menuList[option-1].Charges)*quantity;
		 bill=bill*(menuList[option-1].Tex);
		total_bill=total_bill+bill;
		cout<<"Do you want to make any other choice or not(y/n)?";
		cin>>k;
    	if(k=='y')
    	counter++;
	}
	while(k!='n');
	cout<<"BILL DISPLAYING >>>>>>>>>>>\n";
	cout<<"Item Name\t  Quantity \t Tax \tCharges per Serving \t\n";
	for(int z=0;z<counter+1;z++)
	{
	      option=d[z];
	      quantity=actual_quantity[z];
	      cout<<menuList[option-1].name<<"\t";
	      cout<<quantity<<"\t";
	      cout<<menuList[option-1].Tex<<"\t";
	      cout<<menuList[option-1].Charges<<"\t";
	      cout<<endl;
	}
	cout<<"Total Bill is  $"<<total_bill;
}
int main()
{  
    menuItem menuList[9];
    getData(menuList,9);
    printCheck(menuList,9);
    system("pause");
	return 0;	
}