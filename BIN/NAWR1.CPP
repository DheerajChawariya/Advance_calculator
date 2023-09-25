#include<stdio.h>
#include<conio.h>
int add()
{
 int a,b;
 printf("enter two number");
 scanf("%d%d",&a,&b);
 return (a,b);
}
void main()
{
clrscr();
 int l;
 l=add();
 printf("add=%d",l);
}