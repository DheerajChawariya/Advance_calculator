/*WAP row wise addition*/
#include<iostream.h>
#include<conio.h>
void coloumwise(int a[][30],int r,int c)
{
 int i,j,s;
 cout<<"\ncoloumwise addition=";
 for(i=0;i<c;i++)
   {
    s=0;
     for(j=0;j<r;j++)
      {
	s=s+a[j][i];
      }
      cout<<"\ncoloum number "<<i+1<<"="<<s;
   }
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
coloumwise(a,r,c);
}
