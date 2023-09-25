/*WAP to delete value according to given value*/
#include<iostream.h>
#include<conio.h>
void Delete(int a[],int &n,int val)
{
 int i,pos=-1,found=0;;
 for(i=0;i<n;i++)
 {
  if(a[i]==val)
  {
   pos=i+1;
   found=1;
   break;
  }
 }
 if(found==0)
 {
  cout<<"value not found";
  return;
 }
 for(i=pos;i<n;i++)
 {
  a[i-1]=a[i];
 }
 n--;
}
void main()
{
 clrscr();
 int a[50],n,val,i;
 cout<<"enter how many content insert into array list\n";
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
cout<<"\nwhich value  to be deleted\n";
cin>>val;
Delete(a,n,val);
cout<<"\nafter deleted array list display\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
}
