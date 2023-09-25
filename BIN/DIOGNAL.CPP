/*WAP row wise addition*/
#include<iostream.h>
#include<conio.h>
void antidiognaladd(int a[][30],int r,int c)
{
 int i,j,s=0;
 if(r==c)
  cout<<"antidiognal matrix addition is possible\n";
 else
 {
  cout<<"not";
  return;
 }
 for(i=0;i<r;i++)
   {
     for(j=0;j<r;j++)
      {
	if(i+j==c-1)
	 s=s+a[i][j];
      }
   }
      cout<<"\nantidiognal matrix add="<<s;
}
void main()
{
int a[30][30],i,j,r,c;
clrscr();
cout<<"enter how many row and coloumn insert into matrix\n";
cin>>r>>c;
cout<<"enter values insert into matrix\n";
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  cin>>a[i][j];
 }
}
cout<<"matrix display=\n";
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  cout<<a[i][j]<<" ";
 }
 cout<<"\n";
}
antidiognaladd(a,r,c);
}
