#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class romanType
{
private:
	string numrals;
	int intvalue;
	char rom_char[10000];
public:
	romanType()
	{
		cout << "contructor call " << endl;
	}
	void store()
	{
	//	int value[7] = { 1000,500,100,50,10,5,1 };
	//	char Roman[7] = { 'M','D','C','L','X','V','I' };
		char roman[7] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
		cout << "Roman Numerals are as follows " << endl;
		cout << "  M = 1000" << endl;
		cout << "  D = 500" << endl;
		cout << "  C = 100" << endl;
		cout << "  L = 50" << endl;
		cout << "  X = 10" << endl;
		cout << "  V = 5" << endl;
		cout << "  I = 1" << endl;

		
		cout << "Enter roman number :: ";
		cin >> numrals;
	}
	void convert()
	{
		int counter = 0;
		int number = numrals.length();
		for (int i = 0; i < number+1; i++)
		{	
			rom_char[i] = numrals[i];
			if (rom_char[i] == 'M')
			{
				counter = counter + 1000;
			}
			if (rom_char[i] == 'D')
			{
				counter = counter + 500;
			}
			if (rom_char[i] == 'C')
			{
				counter = counter + 100;
			}
		    if (rom_char[i] == 'L')
			{
				counter = counter + 50;
			}
			if (rom_char[i] == 'X')
			{
				counter = counter + 10;
			}
		    if (rom_char[i] == 'V')
			{
				counter = counter + 5;
			}
			if (rom_char[i] == 'I')
			{
				counter = counter + 1;
			}
		intvalue = counter;
		//number = numrals;
		//counter=numrals;
		}
	}
		void print()
		{  cout<<"Select the Option "<<endl;
			cout<<"press (1.) To print given Num again in Roman \n";
			cout<<"press (2.) To print given Num in Integer Form \n";
			int i=0;
			cin>>i;
			if(i==1)
			{
				cout<<"Roman Numeral is "<<numrals<<endl;
			}
			if(i==2)
			{
				cout<<"Positive Integer Num is "<<intvalue<<endl;
			}
			if(i!=1 && i!=2)
			{
				cout<<"Please Enter a correct Opt\n";
				print();
			}
		}
};

int main()
{
	romanType object;
	object.store();
	object.convert();
	object.print();
	system("pause");
}