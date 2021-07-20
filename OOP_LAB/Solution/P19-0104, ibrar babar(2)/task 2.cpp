#include<iostream>
#include<string>
using namespace std;
int inPalindrome(string x)
{
	int a=0;
	int b = x.length()-1;
	while(a<b)
	{
		if(x[a] != x[b])
			return false;
			a++;
			b--;
	}
		return true;
}
int main()
{
	string y;
	cout<<"enter a word to check "<<endl;
	cin>>y;
	if(inPalindrome(y))
	{
		cout<<"it is palindrome"<<endl;
	}
	else
	{
		cout<<"This is not palindrome"<<endl;
	}
	system("pause");
	return 0;
}