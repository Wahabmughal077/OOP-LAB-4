#include<iostream>
#include<string>
using namespace std;
int find()
{
	string str;
	char check;
	int count=0;
	cout<<"Enter any word or sentense ";
	cin>>str;
	cout<<"Enter the charcater which u want to check ";
	cin>>check;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==check)
		{
			count++;
		}
	}
	cout<<"Number of "<<check<<" = "<<count;
}
int main()
{

	find();
	
}
