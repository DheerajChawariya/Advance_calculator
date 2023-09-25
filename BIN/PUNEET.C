#include<stdio.h>
#include<conio.h>
struct demo
{
// public:
 int a;
 float b;
 char ch;
};
void main()
{
clrscr();
 struct demo o={4,5.7,'A'};
 printf("%d %f %c",o.a,o.b,o.ch);
}