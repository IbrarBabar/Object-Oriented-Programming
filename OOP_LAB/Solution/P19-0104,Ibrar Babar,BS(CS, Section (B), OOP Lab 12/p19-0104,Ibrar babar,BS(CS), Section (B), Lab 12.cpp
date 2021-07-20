#include<iostream>
#include<string>
using namespace std;
class Enemy
{
private:
	static string PositionEnemy[10];
	static int count;
	int x;
public:
	Enemy()
	{
		count++;
		PositionEnemy[10];
	}
	static void Track1()
	{
			PositionEnemy[1]=" is on the Roof";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[1]<<endl;
	}
	static void Track2()
	{
			PositionEnemy[2]=" is on the Corner";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[2]<<endl;
	}
	static void Track3()
	{
			PositionEnemy[3]=" is near the 2nd Floor";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[3]<<endl;
	}
	static void Track4()
	{
			PositionEnemy[4]=" is Near Front Door";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[4]<<endl;
	}
	static void Track5()
	{
			PositionEnemy[5]=" is Outside The door";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[5]<<endl;
	}
	static void Track6()
	{
			PositionEnemy[6]=" is in the Kitchen";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[6]<<endl;
	}
	static void Track7()
	{
			PositionEnemy[7]=" is on the Main Gate";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[7]<<endl;
	}
	static void Track8()
	{
			PositionEnemy[8]=" is in Front Of my Door";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[8]<<endl;
	}
	static void Track9()
	{
			PositionEnemy[9]=" is on my side Room";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[9]<<endl;
	}
	static void Track10()
	{
			PositionEnemy[10]=" is Left Corner of My House";
			cout<<"The Poistion of Enemy ("<<count<<")"<<PositionEnemy[10]<<endl;
	}
};
class AchieveGoal : public Enemy
{
	int shoot;
	int press;
	public:
	void Camera()
	{
		cout<<"My camera's Access Them All !!!"<<endl;
		cout<<"I shoot And Kill Them All "<<endl;
		cout<<"First I have to kill Roof enemy on my House !!!"<<endl;
	}
	void inherit()
	{
		Enemy a;
		Enemy::Track1();
	Enemy b;
	Enemy::Track2();
	Enemy c;
	Enemy::Track3();
	Enemy d;
	Enemy::Track4();
	Enemy e;
	Enemy::Track5();
	Enemy f;
	Enemy::Track6();
	Enemy g;
	Enemy::Track7();
	Enemy h;
	Enemy::Track8();
	Enemy i;
	Enemy::Track9();
	Enemy j;
	Enemy::Track10();
	}
	void shoot1()
	{
		do
		{
		cout<<"I see Roof enemy & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 1 to shoot him  "<<endl;
		cin>>press;
			if(press==1)
		{
			cout<<"Roof enemy is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==1));
	}
	void shoot2()
	{
		do
		{
		cout<<"I see 2nd floor enemy & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 2 to shoot him  "<<endl;
		cin>>press;
		if(press==2)
		{
			cout<<"2nd Floor enemy is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==2));
	}
	void shoot3()
	{
		do
		{
		cout<<"I see enemy in the Kitchen & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 3 to shoot him  "<<endl;
		cin>>press;
		if(press==3)
		{
			cout<<"Enemy on the Kitchen is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(press!=3);
	}
void shoot4()
	{
		do
		{
		cout<<"I see enemy Near Front Door & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 2 to shoot him  "<<endl;
		cin>>press;
		if(press==2)
		{
			cout<<"Front Door Enemy is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==4));

	}
void shoot5()
	{
		do
		{
		cout<<"I see Enemy Outside the door & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 5 to shoot him  "<<endl;
		cin>>press;
		if(press==5)
		{
			cout<<"OutSide the door enemy is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==5));
	}
void shoot6()
	{
		do
		{
		cout<<"I see Enemy in Left Corner Of House & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 6 to shoot him  "<<endl;
		cin>>press;
		if(press==6)
		{
			cout<<"Enemy In Left Corner Of the House is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==6));
	}
void shoot7()
	{
		do
		{
		cout<<"I see Enemy On the Main Gate & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 2 to shoot him  "<<endl;
		cin>>press;
		if(press==7)
		{
			cout<<"Enemy on Main Gate is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==7));
	}
void shoot8()
	{
		do
		{
		cout<<"I see Enemy on the My Side Room & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 8 to shoot him  "<<endl;
		cin>>press;
		if(press==8)
		{
			cout<<"My Side Room Enemy is killed !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==8));
	}
void shoot9()
	{
		do
		{
		cout<<"I see Enemy in Front of My Door & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 9 to shoot him  "<<endl;
		cin>>press;
		if(press==9)
		{
			cout<<"Enemy on Front of My Door is killed  !!!"<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
		while(!(press==9));
	}
void shoot10()
	{
		do
		{
		cout<<"I see Enemy Inside my Room & i load my Gun on Him "<<endl;
		cout<<"Quickly Press 10 to shoot him  "<<endl;
		cin>>press;
		if(press==10)
		{
			cout<<"Enemy Inside my Room is killed  !!! "<<endl<<endl;
		}
		else
		{
			cout<<"No No No I lost the target"<<endl<<endl;
		}
		}
			while(!(press==10));
	}
};
string Enemy :: PositionEnemy[10];
int Enemy :: count=0;
int main()
{
	cout<<"Total Ten Enemies come to MY Home to kill me"<<endl;
	cout<<"I know the location of all  || My Camera Access Them All !!!"<<endl;
	cout<<"But I am not at Home"<<endl;
	cout<<endl;
	AchieveGoal k;
	k.inherit();
	k.shoot1();
	k.shoot2();
	k.shoot3();
	k.shoot4();
	k.shoot5();
	k.shoot6();
	k.shoot7();
	k.shoot8();
	k.shoot9();
	k.shoot10();
	cout<<"All the Enemies are killed and you are safe Now !!!"<<endl;
	system("pause");
	return 0;
}
