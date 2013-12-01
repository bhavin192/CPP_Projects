/* (c) Bhavin Gandhi 2013
BINARY SEARCH 
Simply Enter 10 Numbers and Element To Find
*/


#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],loc,p,beg=0,end=9,mid;
clrscr();
cout<<"Enter 10 Numbers In Ascending Order ";
for(int i=0;i<10;i++)
{cin>>a[i];}
cout<<"Enter Element To Find ";
cin>>p;
mid=int((beg+end)/2);
while(beg<=end && a[mid]!=p)
{
if (p<a[mid])
end=mid-1;
else
beg=mid+1;
mid=int((beg+end)/2);
}
if (a[mid]==p)
{
loc=mid;
cout<<"Location Of Given Element "<<loc;
}
else
cout<<"Given Element Is Not In Given Array ";
getch();
}