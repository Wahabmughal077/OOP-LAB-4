#include<iostream>
#include<string>
using namespace std;
int sec()
{
	string pas="pakistan";
	string name="abcd";
		
	if(pas=='pakistan'&&name=='abcd')
   {
	cout<<"Login access ";
	
	}	
	else
	{
		cout<<"Login Failed ";
	}


}
int main()
{
	string name;
	string pas;
	cout<<"Enter username  ";
	cin>>name;
	cout<<"Enter password ";
	cin>>pas;

	sec();
}
