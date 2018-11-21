#include<iostream>
using namespace std;
int swap(int a,int b)
{
	int x;
	x=a;
	a=b;
	b=x;
	cout<<"After swaping ist  becomes "<<a<<"  And 2nd becomes "<<b<<endl;
}
int main()
{
	int a,b;
	
	cout<<"Enter Ist Number ";
	cin>>a;
	cout<<" Enter 2nd Number ";
	cin>>b;
	swap(a,b);
}
