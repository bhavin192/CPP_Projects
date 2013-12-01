/* (c) Bhavin Gandhi 2013
FILE HANDLING 
Working With Multiple files
*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
{
clrscr();
char name[80];
ofstream write;
write.open("country");
write<<" United States of America ";
write<<"\n United Kindom ";
write<<"\n South Korea ";
write.close();

write.open("capital");
write<<" Washington ";
write<<"\n London ";
weite<<"\n Seoul ";
write.close();

ifstream read;
read.open("country")
cout<<" Contents of country file :- "<<endl;
while(read.eof==0)
{
read.getline(name,80);
cout<<"\n"<<name;
}
read.close();

read.open("capital")
cout<<"\n\n Contents of capital file :- "<<endl:
while(read.eof==0)
{
reaad.getline(name,80);
cout<<"\n"<<name;
}
read.close();

getch();
}
