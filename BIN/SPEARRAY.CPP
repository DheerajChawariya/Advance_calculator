#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,i,t,p;
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
if(n%2==0)
p=0;
else
p=1;
for(i=0;i<n-p;i=i+2)
{
 t=a[i];
 a[i]=a[i+1];
 a[i+1]=t;
}
cout<<"\nafter changed\n";
for(i=0;i<n;i++)
{
 cout<<a[i]<<" ";
}
}