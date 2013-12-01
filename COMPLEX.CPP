/* (c) Bhavin Gandhi 2013
ADDITION OF COMPLEX NUMBERS
*/



#include<iostream.h>
#include<conio.h>
class complex
{
private: int areal,aimg,breal,bimg,creal,cimg;
public: void getdata();
	void add();
	void display();
};
void complex::getdata()
{
cout<<" Enter Real And Imaginary parts of 1 st Number "<<endl;
cin>>areal>>aimg;
cout<<" Enter Real And Imaginary parts of 2 nd Number "<<endl;
cin>>breal>>bimg;
}
void complex::add()
{
creal=areal+breal;
cimg=aimg+bimg;
}
void complex::display()
{
cout<<" 1 st Complex Number = "<<areal<<"+i"<<aimg<<endl<<" 2 nd complex Number = "<<breal<<"+i"<<bimg<<endl<<" Addition = "<<creal<<"+i"<<cimg;
}


void main()
{
clrscr();
complex d;
d.getdata();
d.add();
d.display();
getch();
}
