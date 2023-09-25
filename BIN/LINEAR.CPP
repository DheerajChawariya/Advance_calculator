#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[50],n,i,found=0,val;
 cout<"enter how many content insert into arry list\n";
 cin>>n;
 cout<<"enter values insert into array list\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"which value to be find";
 cin>>val;
 for(i=0;i<n;i++)
 {
  if(a[i]==val)
  {
   found=1;
   break;
  }
}
if(found==1)
cout<<val<<" is found at position number="<<i+1;
else
cout<<"not";1
}