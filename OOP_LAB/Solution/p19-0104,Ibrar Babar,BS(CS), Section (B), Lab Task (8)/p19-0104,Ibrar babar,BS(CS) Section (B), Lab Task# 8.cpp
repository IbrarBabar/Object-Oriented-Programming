#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class AddressType
{
public:
	AddressType(string st_add = "", string C = "" , string St = " " , int Z_C=0);
	AddressType(AddressType &W); // for copy contructor
	void print() const;
	void set(string st_add,string C,string St,int Z_C);
	string getStreetAddress() const;
	string getCity() const;
	string getState() const;
	int getZipCose() const;
	friend void displayAll(AddressType &X);
private:
	string street_address;
	string city;
	string state;
	int zip_code;
};
AddressType :: AddressType(string st_add  , string C , string St  , int Z_C)
{
	cout<<"Contructor !!!"<<endl;
	street_address=st_add;
	city=C;
	state=St;
	zip_code=Z_C;
}
AddressType :: AddressType (AddressType &W) //copy constructor
{
	cout<<"copy Contructotr"<<endl;
	street_address=W.street_address;
	city=W.city;
	state=W.state;
	zip_code=W.zip_code;
}
void AddressType :: print() const
{
	cout<<street_address<<endl;
	cout<<city<<endl;
	cout<<state<<endl;
	cout<<zip_code<<endl;
}
void AddressType :: set(string st_add,string C,string St,int Z_C)
{
	street_address=st_add;
	city=C;
	state=St;
	zip_code=Z_C;
}
string AddressType :: getStreetAddress() const
{
	return street_address;
}
string AddressType ::  getCity() const
{
	return city;
}
string AddressType :: getState() const
{
	return state;
}
int AddressType :: getZipCose() const
{
	return zip_code;
}
void displayAll(AddressType &X)
{
	cout<<"The Address of the street is :: "<<X.street_address<<endl;
	cout<<"The City is :: "<<X.city<<endl;
	cout<<"The State is :: "<<X.state<<endl;
	cout<<"The zip code is :: "<<X.zip_code<<endl;

}
class PersonType
{
public:
	PersonType();
	void print_p() const;  
	void setName(string first,string last);
	string getFirstName() const;
	string getLastName() const;
private:
	string FirstName;
	string LastName;

};
void PersonType :: print_p() const
{
	cout<<FirstName<<"  "<<LastName<<endl;
}
void PersonType :: setName(string first,string last)
{
	FirstName=first;
	LastName=last;
}
string PersonType::getFirstName() const
{
return FirstName;
}
string PersonType :: getLastName() const
{
return LastName;
}
PersonType :: PersonType()
{
	cout<<"Contructor !!!"<<endl;
	FirstName = "";
	LastName = "";
}
class dateType
{
public:
void setDate(int month, int day, int year);
int getDay() const;
int getMonth() const;
int getYear() const;
void printDate() const;
dateType();
private:
	int dDay;
	int dMonth;
	int dYear;
};
void dateType :: setDate(int day, int month, int year)
{
	dDay=day;
	dMonth=month;
	dYear=year;
}
int dateType :: getDay() const
{
	return dDay;
}
int dateType :: getMonth() const
{
	return dMonth;
}
int dateType :: getYear() const
{
	return dYear;
}
void dateType :: printDate() const
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}
dateType::dateType()
{
	cout<<"Contructor !!!"<<endl;
	dMonth = 0;
	dDay = 0;
	dYear = 0;
}
class extraPersonType:public AddressType,public PersonType,public dateType
{
private:
	string Person_type;
	int phone_no;
	string nickname;
public:
	void print_Ex_p() const;
	void set_person(string p_t,int p_n);
	string setPersonType() const;
	int setPhoneNo() const;
	extraPersonType();

	//Friend Function
	friend class FrindClass;
};
void extraPersonType :: print_Ex_p() const
{
	cout<<Person_type<<" "<<phone_no<<endl;
	cout<<nickname<<endl;
}
void extraPersonType :: set_person(string p_t="",int p_n=0)
{
	Person_type=p_t;
	phone_no=p_n;
}
string extraPersonType :: setPersonType() const
{
	return Person_type;
}
int extraPersonType :: setPhoneNo() const
{
	return phone_no;
}
extraPersonType :: extraPersonType()
{
	cout<<"Contructor !!!"<<endl;
	string p_t ="";
	int p_n=0;
}

class FrindClass
{
private:
	string name;
	int age;
public:
	void print_F_C(extraPersonType &Y) const;
	void set_values(string N,int AGE,string N_Name,extraPersonType &X);
	string get_Name() const;
	int get_age() const;
	string get_nickName(extraPersonType &X) const;
};
void FrindClass :: print_F_C(extraPersonType &Y) const
{
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<Y.nickname<<endl;//privat member of exterapersontype class (nickname)
}
void FrindClass :: set_values(string N,int AGE,string N_Name,extraPersonType &X)
{
	name=N;
	age=AGE;
	X.nickname=N_Name;
}
string FrindClass :: get_Name() const
{
	return name;
}
int FrindClass :: get_age() const
{
	return age;
}
string FrindClass :: get_nickName(extraPersonType &X) const
{
	return X.nickname;
}


class addressBookType
{
private:
	string street_address1;
	string city1;
	string state1;
	int zip_code1;

	string FirstName1;
	string LastName1;

	int dDay1;
	int dMonth1;
	int dYear1;

	string Person_type1;
	int phone_no1;
	string nickname1;

	string name1;
	int age1;

	extraPersonType object[1];
public:
	addressBookType()
	{
		cout<<"constructor !!!"<<endl;
	}
	void get_data()
	{
	ifstream file;
	file.open("data.txt");
	for(int i=0;i<1;i++)
	 {
		file>>street_address1;
		file>>city1;
		file>>state1;
		file>>zip_code1;

		file>>FirstName1;
		file>>LastName1;

		file>>dDay1;
		file>>dMonth1;
		file>>dYear1;

		file>>Person_type1;
		file>>phone_no1;
		file>>nickname1;

		file>>name1;
		file>>age1;
		

		
		object[i].set(street_address1,city1,state1,zip_code1);
		object[i].setName(FirstName1,LastName1);
		object[i].setDate(dDay1,dMonth1,dYear1);
		object[i].set_person(Person_type1,phone_no1);
	}
	cout<<"Complete Address is !!!"<<endl;
	cout<<"Person type is !!!"<<endl;
	cout<<"Extraperson type is !!!"<<endl;
	}
	void showdata()
	{
		cout<<"Complete Address is !!!"<<endl;
		for(int i=0;i<2;i++)
		{
			object[i].print();
		}
		cout<<"Person type is !!!"<<endl;
		for(int i=0;i<2;i++)
		{
			object[i].print_p();
		}
		cout<<"Extra Person type is !!!"<<endl;
		for(int i=0;i<2;i++)
		{
			object[i].print_Ex_p();
		}
	}
};
int main()
{
	AddressType o;
	AddressType o1=o;
	addressBookType object;
	object.get_data(); 
	//object.showdata();
	system("pause");
	return 0;
}