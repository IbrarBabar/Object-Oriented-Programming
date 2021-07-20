#include<iostream>
#include<string>
using namespace std;
class stringType
{
	public:
		string str1,str2;
		stringType()
		{
		    str1="  ";
		    str2=str1;
		}
	void setvalues(string stri1,string stri2)
	{
		str1=stri1;
		str2=stri2;
	}
	void printvalues()
	{
		cout<<"First String is "<<str1<<endl;
		cout<<"Second String is "<<str2<<endl;
	}
	string concatenate(string s1, string s2)
	{
		return s1+s2;
	}
	int maxlength()
	{   int counter=0,counter1=0;

	    for(int i=0;str1[i]!='\0';i++)
	    {
	            counter++;
	    }
	    for(int j=0;str2[j]!='\0';j++)
	    {
	            counter1++;
	    }
	    if(counter>counter1)
	    return counter;
	    else
            return counter1;
	}
	 int searchWord(string word)
	 {  int no=0;
	     if(word==str1)
          no=1;
          if(word==str2)
            no=2;
          else
            no=0;
            return no;
	 }
	 int searchChar(char ch)
	 { int n=0;
	     for(int i=0;str1[i]!='\0';i++)
        {
            if(ch==str1[i])
            {
                return n=1;
            }
        }
        for(int j=0;str2[j]!='\0';j++)
        {
            if(ch==str2[j])
            {
                return n=2;
            }
        }
	 }
	 void copy(string source, string destination)
	 {
	     destination=source;
	 }
	 int compare(string s1,string s2)
	 {
	    if(s1==str1 && s2==str2)
            return 1;
        if(s1==str1 && s2!=str2)
            return 2;
        if(s1!=str1 && s2==str2)
            return 3;
        if(s1!=str1 && s2!=str2)
            return 4;
	 }
};
int main()
{
    stringType S;
    char ch;
    string s1,s2,s3,s4;



    cout<<"\n\nEnter the Value of First String \n";
    cin>>s3;
    cout<<"Enter the Value of Second String \n";
    cin>>s4;
    S.setvalues(s3,s4);


  cout<<"Maximum Length in Both the Words is "<<S.maxlength()<<endl;


            cout<<"Enter the Character you want to search \n";
            cin>>ch;
    if(S.searchChar(ch)==1)
            cout<<"Character Found Successfully in "<<S.str1<<endl;
    if(S.searchChar(ch)==2)
            cout<<"Character Found Successfully in "<<S.str2<<endl;



            cout<<"Enter the word you want to search \n";
            cin>>s1;
    if(S.searchWord(s1)==1)
        cout<<"Word is Equal to First Word \n";
    if(S.searchWord(s1)==2)
        cout<<"Word is Equal to Second Word \n";
    if(S.searchWord(s1)==0)
        cout<<"Word Not Found!!! \n";


            cout<<"Enter the First Word you want to compare \n";
            cin>>s1;
            cout<<"Enter the Second Word you want to compare \n";
            cin>>s2;

    if(S.compare(s1,s2)==1)
            cout<<"Both Words are the same \n"<<endl;

    if(S.compare(s1,s2)==2)
            cout<<"Only First Word is Equal\n"<<endl;

    if(S.compare(s1,s2)==3)
            cout<<"Only Second Word is Equal\n"<<endl;

    if(S.compare(s1,s2)==4)
            cout<<"Both are not equal\n"<<endl;


    S.copy(s1,s2);


    return 0;
}
