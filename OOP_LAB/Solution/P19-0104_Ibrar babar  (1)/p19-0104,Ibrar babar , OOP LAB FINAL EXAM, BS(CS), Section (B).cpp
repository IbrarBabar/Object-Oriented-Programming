#include <iostream> 
#include<string>
#include<fstream>
using namespace std;
class Enemy
{
protected:
	int size;
	string colour;
public:
	Enemy()            
	{
		cout<<"constructor of Enemy class  !!!"<<endl;
	}
	Enemy(int S, string C)  // parametric constrctor
	{
		size = S;
		colour = C;
	}
	void setSize(int S)
	{
		size = S;
	}
	int getsize()
	{
		return size;
	}
	void setColour(string C)
	{
		colour = C;
	}
	string getColour()
	{
		return colour;
	}
	virtual void Attack()         // virtual function
	{
		cout<<"In the Base class :: The attacking behaviour of Enemy class"<<endl;	
	}
	virtual void Capture()=0;     // pure virtual function
	virtual void Destroy()=0;     // pure virtual functiom
};
class Aliens : public Enemy
{
private:
    string attacking_throgh;
	string Attacking_from;
	string Colour_of_attacking_from;
public:
	Aliens()
	{
		cout<<"Defualt Consturctor of Alian class !!!"<<endl;
	}
	Aliens(int a, string b, string c)
	{
		attacking_throgh =a;
		Attacking_from=b;
		Colour_of_attacking_from=c;
	}
	Aliens(int a, string b, string c , int S, string C)  // inherit attributes of Enemy class
	{
		attacking_throgh =a;
		Attacking_from=b;
		Colour_of_attacking_from=c;
		size = S;
		colour = C;
	}
	void SetSize()
	{
		size = 9;
		cout<<"Size of Aliens :: "<<size<<" foot"<<endl;
	}
	void setCOLOUR()
	{
		colour = "royal black";
		cout<<"Colour of Aliens is :: "<<colour<<endl;
	}
	void Attack()                  // virtual function
	{
		attacking_throgh= "Leaser Bean";
		cout<<"Aliens are attacking through :: "<<attacking_throgh<<endl;
	}
	
	void Alieans_attacking_from()
	{
		Attacking_from = "Sky";
		cout<<"Alliens are attaking from :: "<<Attacking_from<<endl;
	}
	void Aliens_Attaking_form_colour()
	{
		Colour_of_attacking_from= "Black Sky";
		cout<<"The Colour of "<<Attacking_from<<" is :: "<<Colour_of_attacking_from<<endl;
	}
	void Capture()           // pure virtual
	{
		cout<<"If Aliens are captured and our bullet target them.      So,"<<endl;
	}
	void Destroy()           // pure virtual
	{
		cout<<"If bullet hit their head , they should destoried || dead"<<endl;
	}
};
class Monsters :  public Enemy
{
private:
	string shoot;
	string attacking_through;
	string Attacking_from;
public:
	Monsters() // default constructor
	{
		cout<<"Constructor of Monster class"<<endl;
	}
	Monsters(string SHOOT)      // parametric constructor
	{
		shoot = SHOOT;
	}
	Monsters(string SHOOT, int S, string C)    // inherit protected data members of Enemy class 
	{
		shoot = SHOOT;
		size = S;
		colour = C;
	}
	void SizeOfMonster()
	{
		size = 14;
		cout<<"The Size of monster is :: "<<size<<endl;
	}
	void ColourOfMonster()
	{
		colour = "pure Black";
		cout<<"The colour of Monster is :: "<<colour<<endl;
	}
	void Attack()                  // virtual function
	{
		attacking_through= "Sharp Weapons";
		cout<<"Aliens are attacking through :: "<<attacking_through<<endl;
	}
	void MonsterAttackingFrom()
	{
		Attacking_from= "Ground";
		cout<<"The Monsters are attacking from"<< Attacking_from<<endl;
	}
	void Capture()           // pure virtual
	{
		cout<<"If Monsters are captured and our bullet target them.      So, "<<endl;
	}
	void Destroy()           // pure virtual
	{
		cout<<"If bullet "<<5<<" hit their head , they should destoried || dead"<<endl;
	}
};

class Defender
{
protected:
	int shoot;
	string colour;
public:
	Defender()      // constructor
	{
		cout<<"Default constructor !!!"<<endl;
	}
	Defender(int Shoot)      // parametric constructor
	{
		Shoot = shoot;
	}
	void setshoot(int S)
	{
		shoot = S;
	}
	int getshoot()
	{
		return shoot;
	}
	void setcolour(string C)
	{
		colour = C;
	}
	string getColour()
	{
		return colour;
	}
	virtual void capture()
	{
		cout<<"Defender class :: we have to captured enemies and shooot them !!!"<<endl;
	}
	virtual void destoriedEnemy()=0;
};
class GroundArmy : public Defender
{
private:
	int high_power_gun;
	int aliens;
public:
	GroundArmy()           // default constructor
	{
		cout<<"default constructor of groundArmy"<<endl;
		aliens=0;
	}
	GroundArmy(int g)    // parametric constructor
	{
		high_power_gun=g;
	}
	GroundArmy(int g, int s, string c)   // inherit data members of Defender class
	{
		high_power_gun=g;
		shoot = s;
		colour =  c;
	}
	void ColourOfDefeder()
	{
		colour="White";
		cout<<"The colour of defender army is :: "<<colour<<endl;
	}
	void capture()
	{
		cout<<"The Ground Army have to capture (Alies & Monsters)"<<endl<<endl;
		cout<<"To defend there land"<<endl;
		do
		{
		cout<<"press 1 to shoot (Aliens) on the ground"<<endl;
		cin>>shoot;
		if(shoot==1)
		{
				cout<<"Ground Army hit on the head of the Alien"<<endl;
				cout<<"Alien died"<<endl;
		}
		else
		{
			cout<<"To shoot please press 1"<<endl;
		}
		}
		while(!(shoot==1));

		cout<<endl<<endl;
		

	}
	void destoriedEnemy()
	{
		cout<<"To defend there land"<<endl;
		do
		{
		cout<<"Press 2 to shoot (Monsters) 5 shoots to kill them"<<endl;
		cin>>shoot;
		if(shoot==2)
		{
				cout<<"Ground Army shoot 5 times on the head of the Monsters"<<endl;
				cout<<"Monsters died"<<endl;
		}
		else
		{
			cout<<"To shoot please press 2"<<endl;
		}
		}
		while(!(shoot==2));
	}
};
class AirBornArmy  : public Defender
{
private:
	int airshoot;
public:
	AirBornArmy()
	{
		cout<<"Default constructor of air born army "<<endl;
	}
	AirBornArmy(int AIR, int s, string c)
	{
		airshoot = AIR;
		shoot = s;
		colour = c;
	}
	void capture()
	{
		do
		{
		cout<<"The Air Army have to kill the Aliens coming from Sky"<<endl;
		cout<<"To kill them Press 3"<<endl;
		cin>>shoot;
		if(shoot==3)
		{
			cout<<"The Aliens from sky are captures"<<endl;
		}
		else 
		{
			cout<<"Please press 3 to kill Aliens coming from sky"<<endl;
		}
		}
		while(!(shoot==3));
	}
	void destoriedEnemy()
	{
		do
		{
		cout<<"Aliens can be destoried by Shooting on there head"<<endl;
		cout<<"Press 5 to shoot on there (Head)"<<endl;
		cin>>airshoot;
		if(airshoot==5)
		{
			cout<<"The air born army shoot on the head of Aliens"<<endl;
			cout<<"Aliens totally died"<<endl;
		}
		else
		{
			cout<<"Please press 5 to hit the head shoot"<<endl;
		}
		}
		while(!(airshoot==5));
	}
};
int main()
{
	cout<<"       Wellcome to Simple Alien-Monster Game    "<<endl;
	Enemy *E;
	cout<<endl;
	Aliens A;
	E=&A;
	A.SetSize();
	A.setCOLOUR();
	A.Alieans_attacking_from();
	A.Aliens_Attaking_form_colour();
	E->Attack();
	A.Capture();
	A.Destroy();
	cout<<endl;

	Monsters M;
	E=&M;
	M.SizeOfMonster();
	M.ColourOfMonster();
	M.MonsterAttackingFrom();
	E->Attack();
	M.Capture();
	M.Destroy();
	cout<<endl;
	Defender *D;
	GroundArmy G;
	D=&G;
	G.ColourOfDefeder();
	D->capture();
	G.destoriedEnemy();
	cout<<endl;

	AirBornArmy X;
	D=&X;
	D->capture();
	X.destoriedEnemy();

	cout<<"The defendered defend there Land by killing Aliens and Monsters !!!"<<endl<<endl;
	cout<<"The defenders Won the Game !!!"<<endl;
	system("pause");
	return 0;
}