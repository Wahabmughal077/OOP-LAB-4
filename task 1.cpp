#include<iostream>
using namespace std;
int max(int a ,int b)
{
	if(a>b)
	{
		cout<<a<<" is greater ";
	}
	else if(b>a)
	{
		cout<<b<<" is greater ";
	}
}
int main()
{
	int a,b,result;
	cout<<"Enter ist number ";
	cin>>a;
	cout<<"Enter 2nd number ";
	cin>>b;
	max(a,b);
//cout<<result;
}
