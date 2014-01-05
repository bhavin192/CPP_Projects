/* (c) Bhavin Gandhi 2013
AREA & CIRCUM (OOP)
Simply Find Area & Circumference of Circle By Entering Radius
*/

#include<iostream.h>
#include<conio.h>

class circle
{
 private : float r,c,a;
 public : void input()
  {
   cout<<" Enter Radius of Circle : ";
   cin>>r;
  }
 void process()
  {
   a=3.142*r*r;
   c=2*3.142*r;
  }
 void output()
  {
    cout<<" Area of Circle is : "<<a<<endl;
	cout<<" Circumference of Circle is : "<<c;
  }
};



void main()
{
 clrscr();
 circle s;
 s.input();
 s.process();
 s.output();
 getch();
} 