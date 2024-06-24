#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	private : int x,y;
	
	public : demo(int x1, int y1)
	{
		x= x1;
		y= y1;
	}
	demo(demo &d1)
	{
		x= d1.x;
		y= d1.y;
	}
	public : void getdata()
	{
		cout<<x<<y;
	}
};
main()
{
	demo obj(10,20);
	demo obj1 = obj;
	obj1.getdata();
	getch();
}

