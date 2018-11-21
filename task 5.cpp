#include<iostream>
#include<cstring>
using namespace std;
struct student 
{
	char name[15];
	char id[15];
	char dep[20];
	char sem[5];
};
int get_info()
{
	student s;
	cout<<"Enter student name ";
	cin>>s.name;
	cout<<"Enter student id ";
	cin>>s.id;
	cout<<"Enter student department ";
	cin>>s.dep;
	cout<<"Enter student semester ";
	cin>>s.sem;
}
int show_info()
{
	student s;
	cout<<"Displaying result "<<endl;
	cout<<"Student name : "<<s.name<<endl;
	cout<<"Student Id  : "<<s.id<<endl;
	cout<<"Student Department : "<<s.dep<<endl;
	cout<<"Student Semester : "<<s.sem<<endl;
	
}

int main()
{
	get_info();
	show_info();	
}
