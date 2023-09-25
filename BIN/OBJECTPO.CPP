/*WAP to object pointer*/
#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;
};
void main()
{
 clrscr();
 struct demo d={3},*p=&d;
 printf("%d %d %d %d",d.a,(&d)->a,p->a,(*p).a);
}
