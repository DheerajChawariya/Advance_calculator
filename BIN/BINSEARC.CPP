#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int a[50],n,i,val,found=0,low,high,mid;
 cout<<"enter how many content insert into array list\n";
 cin>>n;
 cout<<"enter values into array list\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"which value to be find\n";
 cin>>val;
 low=0;
 high=n-1;
 while(low<=high)
{
  mid=(low+high)/2;
  if(val==a[mid])
  {
   found=1;
   break;
  }
  else if(val<a[mid])
  high=mid-1;
  else
  low=mid+1;
}
if(found==1)
cout<<val<<" is found at position number="<<mid+1;
else
cout<<"not found";
getch();
}

