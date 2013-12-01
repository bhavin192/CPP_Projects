/* (c) Bhavin Gandhi 2013
VIRTUAL FUNCTION
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>

class person
{
 private : char s[20];
 public : person()
	  {      }
 person(char p[])
  {
   strcpy(s,p);
  }
 virtual void show()
  {
   cout<<" Base Name = "<<s<<endl;
  }
};


class student : public person
{
 private : char n[20];
 public : student()
	  {      }
 student(char p[])
  {
   strcpy(n,p);
  }
 void show()
  {
   cout<<" Derived Name = "<<n<<endl;
  }
};


void main()
{
 clrscr();
 person X("XYZ");
 person *p;
 student Y("ABC");
 p=&X;
 p->show();
 p=&Y;
 p->show();
 getch();
}


/* OUTPUT:-
 Base Name = XYZ
 Derived Name = ABC
*/