/* (c) Bhavin Gandhi 2013
DISTANCE OF POINT FROM ORIGIN
*/



#include<iostream.h>
#include<conio.h>
#include<math.h>
class point
{
private: float x,y,d;
public: void getdata();
	void distance();
	void print();
};

void point::getdata()
{
cout<<" Enter co-ordinates Of Point ";
cin>>x>>y;
}
void point::distance()
{
d=sqrt((x*x)+(y*y));
}
void point::print()
{
cout<<" Distance Of Point ("<<x<<","<<y<<") is "<<d<<endl;
}


void main()
{
point S;
S.getdata();
S.distance();
S.print();
getch();
}