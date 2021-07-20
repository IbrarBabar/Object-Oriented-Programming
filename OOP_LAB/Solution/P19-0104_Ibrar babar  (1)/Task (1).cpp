
	TASK(1)

#include<iostream>
using namespace std;
void sum(int* ptr1, int* ptr2, int* ptr3)
{
	*ptr1 = *ptr2 + *ptr3;
	cout<<"the sum of 2 values is : "<<*ptr1<<endl;
}
int main()
{
	int a,b=4,c=6;
	sum(&a,&b,&c);
	system("pause");
	return 0;
}

========================================
