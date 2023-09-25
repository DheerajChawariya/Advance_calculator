#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][2]={5,7,9,4,6,8},i,j;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{printf(" %d",a[i][j]);}
printf("\n");}
getch();
}