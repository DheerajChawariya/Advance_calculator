/*WAP initializing of structure type variable*/
#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;   //data member(member variable)
 float b;
 char ch;
}t={6,2.4,'c'};                       `
 struct demo d={3,6.8,'A'};
void main()
{
 clrscr();
 struct demo o={4,5.8,'B'};
 printf("%d %f %c",o.a,o.b,o.ch);
 printf("\n%d %f %c",d.a,d.b,d.ch);
 printf("\n%d %f %c",t.a,t.b,t.ch);
 getch();
}