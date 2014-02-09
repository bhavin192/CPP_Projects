#include<conio.h>
#include<iostream.h>

class student
 { protected:int roll_no;
	public:void get_no(int);
			 void put_no();
 };
	void student::get_no(int p)
		{roll_no=p;}
	void student::put_no()
		{cout<<" Roll Number= "<<roll_no<<endl;}

class test:public student
{ protected:float sub1,sub2;
  public:void get_marks(float,float);
			void put_marks();
};
	void test::get_marks(float r,float s)
		 {sub1=r;
		  sub2=s;
		 }
	void test::put_marks()
		 {cout<<" Marks in Subject 1= "<<sub1<<endl;
		  cout<< " Marks in Subject 2= "<<sub2<<endl;}

class sports
 {protected:float smarks;
  public:void get_smarks(float);
			void put_smarks();
 };
  void sports::get_smarks(float sb)
		 {smarks=sb;}
  void sports::put_smarks()
		 {cout<<" Marks in Sports= "<<smarks<<endl;}



class result:public test, public sports
		{protected:float total;
		 public:void display();
		};
 void result::display()
		{total=sub1+sub2+smarks;
		 put_no();
		 put_marks();
		 put_smarks();
		 cout<<" Total= "<<total<<endl;
		}


void main()
{clrscr();
 result S;
 S.get_no(123);
 S.get_marks(95,90);
 S.get_smarks(85);
 S.display();
 getch();
}

/* OUTPUT-
  Roll Number= 123
  Marks in Subject 1= 95
  Marks in Subject 2= 90
  Marks in Sports= 85
  Total= 270
*/
