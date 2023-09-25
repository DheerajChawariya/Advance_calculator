#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int a[5][4],i,j,r,c;
 printf("enter how many row and coloum insert into matrix\n");
 scanf("%d%d",&r,&c);
 printf("enter values into array list\n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
    scanf("%d",&a[i][j]);
   }
  }
  printf("matrix display\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
    printf("%4d ",a[i][j]);
    }
    printf("\n");
   }
}