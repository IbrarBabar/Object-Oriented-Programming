#include<iostream>
#include<string>
using namespace std;
class addressType
{public:
    string addresss[500];
    addressType()
    {
        for(int i=0;i<500;i++)
        addresss[i]="   ";
    cout<<"Constructor Created !!! \n";
    }
    void storeaddress(string ad[],int n)
    {

        addresss[n]=ad[n];
    }

    void printaddress()
    {
    for(int i=0;i<500;i++){
    cout<<"Street Address is : "<<addresss[i]<<endl;
    }}
};
    class personType {
        public:
            string first[500],last[500];

            personType(string First[], string Last[],int n)
            {
                setName(First,Last,n);
            }

             void printname() const
             {   for(int i=0;i<500;i++)
                 cout<<first[i]<<"   "<<last[i]<<endl;
             }
             void setName(string First[],string Last[],int n)
             {
                 first[n]=First[n];
                 last[n]=Last[n];
             }
             string getFirstName(int n) const
             {
                 return first[n];
             }
             string getLastName(int n) const
             {
                 return last[n];
             }
    };


    class dateType
    {   public:
        int dday[500],dmonth[500],dyear[500];
        public:
        dateType(int month[], int day[], int year[],int n)
        {
                setDate(month,day,year,n);
        }
        void setDate(int month[], int day[], int year[],int n)
        {
            dmonth[n]=month[n];
            dday[n]=day[n];
            dyear[n]=year[n];
        }
        int getDay(int n) const
        {
            return dday[n];
        }
        int getMonth(int n) const
        {
            return dmonth[n];
        }
        int getYear(int n) const
        {
            return dyear[n];
        }

        void printDate(int n) const
        {
            cout << dmonth[n] << "-" << dday[n] << "-" << dyear[n]<<endl;
        }



};
class extPersonType:public addressType,public personType,public dateType
    { public:
        string person[500];
        int ph[500];
        extPersonType()
        {for(int i)
        {person[i]=" ";
        ph[i]=0;}
        }
        void store(string per,int phn)
    {
        person=per;
        ph=phn;
    }

    void print()
    {
        cout<<"Person is : "<<person<<endl;
        cout<<"Phone Number is : "<<ph<<endl;
        printaddress();
        cout<<"D.O.B of Person is (dd/mm/yy)("<<getDay()<<","<<getMonth()<<","<<getYear()<<")"<<endl;
    }
    };

class addressBookType:public extPersonType
{public:
    string file;
    void input()
    {
        ifstream in;
        in.open(file+".txt");
for(int i=0;i<500;i++)
{
    in>>
}
    }
};
int main()
{
    addressType A;
    A.store();
    cout<<A.street;
    return 0;
}