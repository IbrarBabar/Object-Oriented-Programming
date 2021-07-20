#include<iostream>
#include<string>
using namespace std;
class repeat
{
private:
	int counter;
public:
	repeat():counter(0)
	{
	}
	void input()
	{
		cout << "Enter a non-negative number :: ";
		cin >> counter;
	}
	void increament()
	{
		cout << "The increament in counter is :: " << counter + 1 << endl;
	}
	void decrewament()
	{
		cout << "The decreament in the counter is :: " << counter - 1 << endl;
	}
};
int main()
{
	repeat object;
	object.input();
	char press;
	cout << "press (I or i) for increament || press (D or d) for decreament :: ";
	cin >> press;
	if (press == 'I' || press == 'i')
	{
		object.increament();
	}
	if (press == 'D' || press == 'd')
	{
		object.decrewament();
	}
	system("pause");
	return 0;
}