#include<iostream>
#include<string>
#include<fstream>
using namespace std;
//creating a class of addresstype
class addressType
{
   public:
    string addresss;
    string city;
	string state;
	string zip;
    addressType()
    {
    addresss="   ";
    cout<<"Constructor is automatically called :: !"<<endl;
    }
    void storeaddress(string ADDRESS,string CITY,string STATE, string ZIP)
    {
        addresss=ADDRESS;
        city=CITY;
        state=STATE;
        zip=ZIP;
    }
    void printaddress()
    {
    cout<<"Street Address: "<<addresss<<endl;
    }
    void printcity()
    {
    	cout<<"City          : "<<city<<endl;
	}
	void printstate()
	{
		cout<<"State         : "<<state<<endl;
	}
	void printzip()
	{
		cout<<"Zip code      : "<<zip<<endl;
	}
};
//creating a class of persontype
class personType
{
    public:
    	string firstname,lastname;
    public:
            personType(string first="  ",string last="  ")
            {  
				cout<<"Constructor is called :: !"<<endl;
                setName(firstname,lastname);
            }
void printname() const
{
     cout<<lastname<<"  "<<firstname;
}
void setName(string FIRSTNAME,string LASTNAME)
{
      firstname=FIRSTNAME;
      lastname=LASTNAME;
}
string getFirstName() const
{
       return firstname;
}
string getLastName() const
{
    return lastname;
}
};
//creating a class of data type
class dateType
    {  
	    public:
        int day;
		int month;
		int year;
        public:
       dateType()
        {
        	cout<<"Costructor is called :: !"<<endl;
        	int month=0,day=0,year=0;
        }
        void setDate(int DAY,int MONTH, int YEAR)
        {
            month=MONTH;
            day=DAY;
            year=YEAR;
        }
        int getDay() const
        {
            return day;
        }
        int getMonth() const
        {
            return month;
        }
        int getYear() const
        {
            return year;
        }

        void printDate() const
        {
        	cout<<"DOB: "<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
//creating and inherit a class of extraperson
class extPersonType:public addressType,public personType,public dateType
    { 
	public:
        string person;
        int ph;
    public:
        extPersonType()
        {
        person="   ";
        ph=0;
        }
        void store(string PERSON,int PH)
    {
        person=PERSON;
        ph=PH;
    }

    void print()
    {
        cout<<person<<"\t"<<ph;
    }
};
class addressBookType
{
public:
	extPersonType e[2];//Class Mumber. 
    string file;

    void input()
    {   
	    string first,last,P2;
		string a,c,s,z;     //first class members declearation for calling.
        int D,M,Y;
        char P1[1000];
        ifstream in;
        in.open("abc.txt");
        for(int i=0;i<2;i++)
    {
            in>>first;
            in>>last;
            in>>D>>M>>Y;
             e[i].setDate(M,D,Y);
            e[i].setName(first,last);
            in>>P2>>D;
            e[i].store(P2,D);
            getline(in,a,'\n');
            e[i].storeaddress(a,c,s,z);
    }
    }

    void output()
    {
            cout<<"Last_Name"<<" "<<"First_Name"<<" "<<"DOB"<<" "<<"Relation"<<" "<<endl;
            cout<<"Ph. No.\t"<<"  Address "<<endl;
            for(int i=0;i<2;i++)
            {
            e[i].printname();
            cout<<"\t";
            e[i].printDate();
            cout<<"\t";
            e[i].print();
            cout<<"\t";
            e[i].printaddress();
            }
    }
        void search()
        {  int counter=0;
        string n;
        cout<<"Enter the Last Time To Search= "<<endl;
        cin>>n;
            for(int i=0;i<2;i++) 
            {
            if(n==e[i].getLastName())
            {
				  if(counter==0)
                {
				  cout<<"Person(s) With Last Name "<<n<<" are="<<endl<<endl;
				}
            cout<<" D.O.B  = "<<endl;
            e[i].printDate();
            cout<<" Relation And Ph. No. is = "<<endl;
            e[i].print();
            cout<<" Address is = ";
            e[i].printaddress();
            cout<<endl<<endl;
            counter++;
            }
            }
            if(counter==0)
            {
			    cout<<"Not Found !"<<endl;
			}
        }
        void searchm()
        {
		 int m,counter=0;
        cout<<"Enter The Month You Want to Search For="<<endl;
        cin>>m;
            for(int i=0;i<2;i++)
            {
                if(m==e[i].getMonth())
                {      if(counter==0)
                    {
					cout<<"Name(s) of Person(s) with Same Month Of Birth are "<<endl<<endl<<endl;
                    cout<<"Last Name   "<<"First Name "<<endl;
					}
                    e[i].printname();
                    cout<<endl;
                    counter++;
                }
            }
			if(counter==0)
            {
		    cout<<"Not Found ! "<<endl;
		    }
		}
        void searchl()
        {
            string n,l;
            int j,counter=0;
            cout<<"Enter the First Last Name ="<<endl;
            cin>>n;
            cout<<"Enter the Second Last Name = "<<endl;
            cin>>l;

            for(int i=0;i<2;i++)
            {
                if(n==e[i].getLastName())
                {
                    for(j=i;l==e[j].getLastName();j++)
                        { 
						 if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl<<endl;
                        cout<<"Last Name  "<<"First Name "<<endl;
						}
                            e[j].printname();
                            cout<<endl<<endl;
                            counter++;
                        }
                }
            }
            if(counter==0)
            {
			    cout<<"Not Found ! "<<endl;
			}
        }

        void searchr()
        { 
		int counter=0,press;
        cout<<"press a number according to the following choices given below ! "<<endl;
        cout<<"press (1) for Family Members"<<endl;
        cout<<"press (2) For Searching of Friends"<<endl;
        cout<<"press (3) For Searching of Business purposes "<<endl;
        cin>>press;
            for(int i=0;i<2;i++)
            {
                if(press==1)
                {
                    if(e[i].person=="Family")
                    {   if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl;
                        cout<<"Last Name  "<<"First Name "<<endl;
						}
                            e[i].printname();
                            cout<<endl;
                            counter++;
                    }
                }
                if(press==2)
                {
                    if(e[i].person=="Friend")
                    {   
					  if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl;
                        cout<<"Last Name  "<<"First Name "<<endl;
						}
                            e[i].printname();
                            cout<<endl;
                            counter++;
                    }
                }

                if(press==3)
                {
                    if(e[i].person=="Business")
                    {   
					  if(counter==0)
                        {
						cout<<"Name(s) are ="<<endl;
                        cout<<"Last Name"<<"   "<<"First Name  "<<endl;
                        }
                            e[i].printname();
                            cout<<endl;
                            counter++;
                    }
                }
            } 
			if(counter==0)
			{
			cout<<"Not Found !"<<endl;
		    }
        }


        void choices()
        {   
		int press;
            cout<<"press number according to the following choices given below ! "<<endl;
            cout<<"press (1) -> Search for a person by last name="<<endl;
            cout<<"press (2) -> Print the address, phone number, and date of birth of a given person"<<endl;
            cout<<"press (3) -> Print the names of the people whose birthdays are in a given month "<<endl;
            cout<<"press (4) -> Print the names of all the people between two last names "<<endl;
            cout<<"press (5) -> Print the names of all family members, friends, or business purposes"<<endl;
            cin>>press;
            if(press==1)
            search();
            else if(press==2)
            search();
            else if(press==3)
            searchm();
            else if(press==4)
            searchl();
            else if(press==5)
            searchr();
            else
            cout<<"invalid option!"<<endl;
        }
};
int main()
{
	
	//inherit classes used,,, -> So we only call addressBookType 
    addressBookType A;
    A.input();
    A.choices();
	system("pause");
    return 0;
}












