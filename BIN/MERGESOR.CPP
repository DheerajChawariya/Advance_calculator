#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int a[50],b[50],c[50],l,k,t=0,n,m,i;
 cout<<"enter how many values insert into first array list";
 cin>>n;
 cout<<"enter values into first array list in ascensing order\n";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"enter how many values insert into second array in ascending  array list\n";
 cin>>m;
 cout<<"enter values into second array list in ascending order\n";
 for(i=0;i<m;i++)
 {
  cin>>b[i];
 }
 l=0;
 k=0;
while(l<n&&k<m)
{
 if(a[l]<=b[k])
 c[t++]=a[l++];
 else
 c[t++]=b[k++];
}
while(l<n)
{
c[t++]=a[l++];
}
while(k<m)
{
c[t++]=b[k++];
}
 cout<<"after merged sort of two array list\n";
 for(i=0;i<t;i++)
 {
  cout<<c[i]<<" ";
 }
}

