#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;
 float b;
}o={7,4.5};
void main()
{
 demo d={8,4.5};
 clrscr();
 printf("%d %f",d.a,d.b);
 printf("\n%d %f",o.a,o.b);
}
