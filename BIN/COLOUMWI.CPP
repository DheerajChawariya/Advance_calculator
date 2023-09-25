#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int a[50][50],i,j,r,c,s=0;
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
    printf("%d ",a[i][j]);
    }
    printf("\n");
   }
    printf("coloumwise addition\n");
  for(i=0;i<c;i++)
  {
   for(j=0;j<r;j++)
   {
    s=s+a[j][i];
    }
    printf("\ncoloum number %d=%d",i+1,s);
    s=0;
   }
}