/* (c) Bhavin Gandhi 2013
BUBBLE SORT -Ascending Order
Simply Enter 10 Numbers To Sort
*/


#include<conio.h>
#include<iostream.h>
void main()
{
int a[10],i,j,temp;
clrscr();
cout<<"Enter 10 Numbers ";
for(i=0;i<10;i++)
{cin>>a[i];}
for(i=0;i<10;i++)
{
for(j=0;j<(10-i);j++)
{
if (a[j]>a[j+1])// Just Change ">" by "<" for Descending
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"Array In Ascending Order ";
for (i=0;i<10;i++)
{
cout<<a[i]<<" ";
}
getch();
}
