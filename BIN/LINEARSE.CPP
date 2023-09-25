#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int a[50],n,i,val,found=0;
 cout<<"enter how many content insert into array list\n";
 cin>>n;
 cout<<"enter values into array list\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"which value to be find\n";
 cin>>val;
 for(i=0;i<n;i++)
 {
  if(val==a[i])
  {
   found=1;
   break;
  }
 }
if(found==1)
cout<<val<<" is found at position number="<<i+1;
else
cout<<"not find";
getch();
}
