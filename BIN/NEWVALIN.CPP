/*WAP to new value insert according to given position*/
#include<iostream.h>
#include<conio.h>
void insert(int a[],int &n,int pos,int new_val)
{
 int i;
 for(i=n-1;i>=pos-1;i--)
 {
  a[i+1]=a[i];
 }
 a[pos]=new_val;
 n++;
}
void main()
{
 clrscr();
 int a[50],n,pos,new_val,i;
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
cout<<"\nwhich after position new value to be inserted\n";
cin>>pos;
cout<<"enter new value\n";
cin>>new_val;
insert(a,n,pos,new_val);
cout<<"after inserted array list display\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
}
