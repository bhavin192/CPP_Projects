/* (c) Bhavin Gandhi 2013
CONSTRUCTOR DESTRUCTOR
*/



#include<iostream.h>
#include<conio.h>
class object
{
public:object();
       ~object();
};

object::object()
{
cout<<" Object Born "<<endl;
}
object::~object()
{
cout<<" Object Dies "<<endl;
}



void main()
{
clrscr();
object a;
cout<<" Object Alive "<<endl;
getch();
}