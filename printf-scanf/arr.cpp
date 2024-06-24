#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
	int id;
	char name[100];
	
	public : void getdata()
	{
		cout<<"Enter no";
		cin>>id;
		cout<<"Enter name";
		cin>>name;	
	}
	public : void putdata()
	{
		cout<<id;
		cout<<name;
	}
};
main()
{
	Demo obj[3];
	int no,i;
	
	cout<<"Enter No of emp";
	cin>>no;
	
	for(i=0;i<no;i++)
	{
		obj[i].getdata();
		
	}
	for(i=0;i<no;i++)
	{
		obj[i].putdata();
		
	}
	getch();
	
}
