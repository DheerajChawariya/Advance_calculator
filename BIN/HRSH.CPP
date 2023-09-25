#include<iostream.h>
# include<stdio.h>
#include<conio.h>
void main()
{
int a=2, b=3, c=4, x=2;
clrscr();
x=(c--,c=c+2,++a);
printf("%d %d",x,c);
getch();
}

