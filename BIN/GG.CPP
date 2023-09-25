#include<stdio.h>
#include<conio.h>
struct demo
{
 int a,b;
 float c,d;
 char ch,ch1;
 void fun()
 {
  printf("hello");
 }
}o={4,8,2.3,8.9,'C','D'};
struct demo l={2,5,6.7,9.5,'E','G'};
void main()
{
  struct demo d={5,8,3.4,5.6,'A','B'};
  printf("%d %d %f %f %c %c",o.a,o.b,o.c,o.d,o.ch,o.ch1);
  printf("\n%d %d %f %f %c %c",l.a,l.b,l.c,l.d,l.ch,l.ch1);
  printf("\n%d %d %f %f %c %c",d.a,d.b,d.c,d.d,d.ch,d.ch1);
 o.fun();
}


