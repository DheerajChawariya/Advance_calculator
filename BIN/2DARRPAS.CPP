#include<stdio.h>
#include<conio.h>
void fun(int a[][30],int r,int c)
{
 int i,j;
 printf("matrix dispaly in defination block\n");
 for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
      {
	printf("%d ",a[i][j]);
	a[i][j]+=2;
      }
      printf("\n");
   }
}
void main()
{
int a[30][30],i,j,r,c;
clrscr();
printf("enter how many row and coloumn insert into matrix");;
scanf("%d%d",&r,&c);
printf("enter values insert into matrix");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&a[i][j]);       //cin>>a[i][j];
 }
}
fun(a,r,c);
printf("after calling matrix display\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  printf("%d ",a[i][j]);   //cout<<a[i][j]<<" ";

 }
printf("\n");
}
}
