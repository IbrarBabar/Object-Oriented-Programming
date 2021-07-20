#include <iostream>
#include<string>
using namespace std;
class Worker
{
private:
	string *workerName;
	string SSN;
public:
	Worker();
	Worker(string setworkerName,string ssn);//overloaded constructor
	~Worker();
	void setWorkerName(string setworkerName);
	void setSSN(string Social_security_number);
	string getWorkerName();
	string getSSN();
	virtual void printValues();
};
Worker :: Worker()
	{
		string *workerName = new string;
		SSN = "";
	}
Worker :: Worker(string setworkerName,string ssn) //overloaded constructor
	{
		workerName = &setworkerName;
		SSN = ssn;
	}
Worker :: ~Worker()
	{
		delete workerName;
	}
void Worker :: setWorkerName(string setworkerName)
	{
		workerName = &setworkerName;
	}
void Worker :: setSSN(string Social_security_number)
	{
		SSN=Social_security_number;
	}
string Worker :: getWorkerName()
	{
		return *workerName;
	}
string Worker :: getSSN()
	{
		return SSN;
	}
void Worker :: printValues()
	{
		cout<<"The name of the worker is :: "<<*workerName<<endl;
		cout<<"The Social Security Number of the Worker is :: " <<SSN<<endl;
	}
class PayWorker : public Worker
{
private:
	int dependents;
	double payRate;
public:
	void setPayRate( double PAYRATE);
	void setDependents(int DEPENDENTS);
	double getPayRate();
	int getDependents();
	void printValues(Worker &object);
};
void PayWorker :: setPayRate( double PAYRATE)
	{
		payRate =PAYRATE;
	}
void PayWorker :: setDependents(int DEPENDENTS)
	{
		dependents= DEPENDENTS;
	}
double PayWorker :: getPayRate()
	{
		return payRate;
	}
int PayWorker :: getDependents()
	{
		return dependents;
	}
void PayWorker :: printValues(Worker &object)
	{
		object.printValues();
		cout<<"The dependents is :: "<<dependents<<endl;
		cout<<"The Pay Rate is :: "<<payRate<<endl;
	}
int main() 
{
	PayWorker P;
	string name;
	string ssn;
	int dependents;
	double payrate;
	cout<<"Enter the name of the Worker :: ";
	cin>>name;
	cout << "Enter your SSN: XXX-XX-XXXX :: ";
    cin >> ssn;
	cout<<"Enter pay Rate :: ";
	cin>>payrate;
	cout<<"Enter dependent :: ";
	cin>>dependents;
	P.setWorkerName(name);
	P.setSSN(ssn);
	P.setDependents(dependents);
	P.setPayRate(payrate);
	cout<<"In base class Worker workerName is :: "<<P.getWorkerName()<<endl;
	cout<<"In base class Worker SSN is "<<P.getSSN()<<endl;
	cout<<"In derived class PayWorker payRate is :: "<<P.getDependents()<<endl;
	cout<<"In derived class PayWorker dependents is :: "<<P.getPayRate()<<endl;
	P.printValues(P);
	system("pause");
	return 0;
}

