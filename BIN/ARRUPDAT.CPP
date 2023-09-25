/*WAP to value update according to given value*/
#include<iostream.h>
#include<conio.h>
void update(int a[],int n,int edit_val,int new_val)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(a[i]==edit_val)
  {
   a[i]=new_val;
   }
  }
}
void main()
{
 clrscr();
 int a[50],n,edit_val,new_val,i;
 cout<<"enter how many content insert into array list";
 cin>>n;
 cout<<"enter values insert into array list\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"new list display\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
cout<<"\nwhich value to be updated\n";
cin>>edit_val;
cout<<"enter new value\n";
cin>>new_val;
update(a,n,edit_val,new_val);
cout<<"after updated array list display\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
}
