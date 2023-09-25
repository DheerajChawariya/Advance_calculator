/*WAP to delete value according to given position*/
#include<iostream.h>
#include<conio.h>
void Delete(int a[],int &n,int pos)
{
 int i;
 for(i=pos;i<n;i++)
 {
  a[i-1]=a[i];
 }
 n--;
}
void main()
{
 clrscr();
 int a[50],n,pos,i;
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
cout<<"\nwhich position's value  to be deleted\n";
cin>>pos;
Delete(a,n,pos);
cout<<"after deleted array list display\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
}
