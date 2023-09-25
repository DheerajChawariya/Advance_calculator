#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,i,t;
 cout<<"enter how many content insert into array list\n";
 cin>>n;
 cout<<"enter values into array list\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"list display\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 cout<<"\nreverse list display\n";
 for(i=0;i<n/2;i++)
 {
  t=a[i];
  a[i]=a[n-i-1];
  a[n-i-1]=t;
 }
for(i=0;i<n;i++)
{
 cout<<a[i]<<" ";
}
}