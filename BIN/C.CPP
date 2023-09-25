#include<stdio.h>
#include<conio.h>
void main()
{
int a[50][50],i,j,r,c,s=0;
clrscr();
printf("enter how many row and collum");
scanf("%d%d",&r,&c);
printf("enter volve list display\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("matrix list display\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("transposh of matrix\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",a[j][i]);
}
printf("\n");
}
printf("\nrow wise adintion\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
s=s+a[i][j];
}
printf("\n row number=%d %d",i+1,s);
s=0;
}
printf("\n columm wise addition");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
s=s+a[j][i];
}
printf("\n columm number%d=%d",i+1,s);}
s=0;
getch();
}

