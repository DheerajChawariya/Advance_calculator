//WAP object pointer or pointer to structure
#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;
}o={8},*p;                //*p=&o
void main()
{
clrscr();
 p=&o;
 printf("%d %d %d %d",o.a,(&o)->a,p->a,(*p).a);
}



