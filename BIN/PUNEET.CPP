#include<stdio.h>
#include<conio.h>
struct demo
{
 public:
 int a;
 float b;
 char ch;
};
void main()
{
 struct demo o={4,5.7,'A'};
 clrscr();
 printf("%d %f %c",o.a,o.b,o.ch);
}