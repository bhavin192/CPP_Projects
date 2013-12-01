/* (c) Bhavin Gandhi 2013
EXCHANGE BY REFRENCE
Exchanges Numbers By using Refrence
*/


#include<conio.h>
#include<iostream.h>
void main()
{
void exchange(int*,int*);
int x,y;
clrscr();
cout<<"Enter Two Numbers ";
cin>>x>>y;
cout<<" Numbers Before Exchange "<<endl;
cout<<" x= "<<x<<endl;
cout<<" y= "<<y<<endl;
exchange(&x,&y);
cout<<" Numbers After Exchange "<<endl;
cout<<" x= "<<x<<endl;
cout<<" y= "<<y<<endl;
getch();
}
void exchange(int*a,int*b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
