#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int a[50][50],b[50][50],r,r1,c1,r2,c2,i,j;
cout<<"enter how many row and coloum insert into matrix first\n";
cin>>r1>>c1;
cout<<"enter how many row and coloum insert into matrix second\n";
cin>>r2>>c2;
if((r1==r2)&&(c1==c2))
cout<<"addition of two matrix is possible";
else
{
cout<<"not";
exit(0);
}
cout<<"\nenter values into first matrix\n";
for(i=0;i<r1;i++)
 {
   for(j=0;j<c1;j++)
     {
      cin>>a[i][j];
     }
 }
 cout<<"enter values into second matrix\n";
  for(i=0;i<r2;i++)
 {
   for(j=0;j<c2;j++)
     {
      cin>>b[i][j];
     }
 }
cout<<"\nfirst matrix display\n";
 for(i=0;i<r1;i++)
  {
   for(j=0;j<c1;j++)
     {
       cout<<a[i][j]<<" ";
     }
   cout<<"\n";
  }
 cout<<"\nsecond matrix display\n";
 for(i=0;i<r2;i++)
  {
   for(j=0;j<c2;j++)
     {
       cout<<b[i][j]<<" ";
     }
   cout<<"\n";
  }
cout<<"\naddition of two matrix display\n";
 for(i=0;i<r1;i++)
  {
   for(j=0;j<c2;j++)
     {
       cout<<a[i][j]+b[i][j]<<" ";  //printf("%d ",a[i][j]+b[i][j]);
     }
   cout<<"\n";
  }
}
