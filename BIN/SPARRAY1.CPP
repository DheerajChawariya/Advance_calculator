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
for(i=0;i<n/2;i++)
{
 t=a[i];
 a[i]=a[n/2+i+p];
 a[n/2+i+p]=t;
}
cout<<"\nafter changed\n";
for(i=0;i<n;i++)
{
 cout<<a[i]<<" ";
}
}