//coloumn wise swap
#include<iostream.h>
#include<conio.h>
#include<process.h>
void rowswap(int a[][20],int r,int c)
{
int i,t;
 for(i=0;i<r;i++)     //coloumn wise swap process apply
{
 t=a[i][0];
 a[i][0]=a[i][c-1];
 a[i][c-1]=t;
}
}
void main()
{
 int a[50][20],i,j,t,r,c;
 clrscr();
 cout<<"enter how many content insert into array list";
 cin>>r>>c;
 cout<<"enter values into matrix";
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   cin>>a[i][j];
  }
 }
 cout<<"matrix display\n";
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   cout<<a[i][j]<<" ";
  }
 cout<<"\n";
}
rowswap(a,r,c);
 cout<<"after row wise swap matrix display\n";
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   cout<<a[i][j]<<" ";
  }
 cout<<"\n";
}
getch();
}
