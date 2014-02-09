#include<conio.h>
#include<iostream.h>

class student
{ protected:int roll_no;
  public:void get_no(int);
         void put_no();
}
void student::get_no(int p)
{ roll_no=p;}

void student::put_no()
{cout<<" Roll Number "<<roll_no<<endl;
}

class test:public student
{ protected:float sub1,sub2;
  public:void get_marks(float,float);
         void put_marks();
}

void test::get_marks(float r,float s)
{sub1=r;
sub2=s;}

void test::put_marks()
{cout<<" "<<<<""<<;
}


class sports
{protected:float smarks;
 public:get_smarks(float);
        put_smarks();
}

void sports::get_smarks(float sb)
{smarks=sb;}

void sports::put_smarks()
{}

class result:public test,public sports
{ protected:float total;
  public:void display();
}

void result::display()
{total=sub1+sub2;
put_no();
put_marks();
put_smarks();
cout<<total;
}

void main()
{
result SP;
SP.
getch();
}  
