/*WAP to new value insert according to given value*/
#include<iostream.h>
#include<conio.h>
void insert(int a[],int &n,int val,int new_val)
{
 int i,pos;
 for(i=0;i<n;i++)
 {
  if(a[i]==val)
  {
   pos=i+1;
   break;
  }
 }
 for(i=n-1;i>=pos;i--)
 {
  a[i+1]=a[i];
 }
 a[pos]=new_val;
 n++;
}
void main()
{
 clrscr();
 int a[50],n,val,new_val,i;
 cout<<"enter how many content insert into array list";
 cin>>n;
 cout<<"enter values insert into array list\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"list display\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
cout<<"\nafter which value,new value to be inserted\n";
cin>>val;
cout<<"enter new value\n";
cin>>new_val;
insert(a,n,val,new_val);
cout<<"after inserted array list display\n";
for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
}
