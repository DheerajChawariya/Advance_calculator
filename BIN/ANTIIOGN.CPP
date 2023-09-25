/*WAP antidiognal matrix addition*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
int a[30][30],i,j,r,c,s=0;
clrscr();
printf("enter how many row and coloumn insert into matrix\n");
cin>>r>>c;  //scanf("%d%d",&r,&c);
 if(r==c)
  cout<<"antidiognal matrix addition is possible\n";
 else
 {
  cout<<"not";
  return;
 }
cout<<"enter values insert into matrix\n";
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  cin>>a[i][j];  //scanf("%d",&a[i][j]);
 }
}
cout<<"matrix display=\n";
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  cout<<a[i][j]<<" ";    //printf("%d ",a[i][j]);
 }
 cout<<"\n";   //printf("\n");
}
 cout<<"\nantidiognal matrix add=";
 for(i=0;i<r;i++)
   {
     for(j=0;j<r;j++)
      {
	if(i+j==c-1)
	 s=s+a[i][j];
      }
   }
  printf("%d",s);
}
