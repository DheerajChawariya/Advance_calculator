#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int a[50],i,n,max,min;
 cout<<"enter how many content insert into array list\n";
 cin>>n;
 cout<<"enter values insert into array list";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 max=min=a[0];
 for(i=1;i<n;i++)
 {
  if(max<a[i])
  max=a[i];
  else if(min>a[i])
  min=a[i];
 }
 cout<<"count of maximum value="<<max;
 cout<<"\ncount ofminimum value="<<min;
}
