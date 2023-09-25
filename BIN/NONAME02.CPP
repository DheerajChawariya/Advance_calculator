#include<stdio.h>
#include<conio.h>
void add();
void sub();
void main()
{
clrscr();
sub();
add();
getch();
}
void add()
{
 int a,b;
 printf("\nenter two number");
 scanf("%d%d",&a,&b);
 printf("add=%d",a+b);
}
void sub(void)
{
 int a,b;
 printf("\nenter two number");
 scanf("%d%d",&a,&b);
 printf("sub=%d",a-b);
}