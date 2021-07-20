#include<iostream>
using namespace std;
int print(int a, int b)
{
	if (a == 0)
		return 2*b;
		b++;
	print(a - 1, b);
}
int main()
{
	int copy;
	copy=100;
	cout <<"The copies = "<< print(copy , 1)<<endl;
	system("pause");
	return 0;
}
