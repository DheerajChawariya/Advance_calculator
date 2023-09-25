/*WAP initializing of structure type variable*/
#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;   //data member(member variable)
 float b;
 char ch,str[30];
}t={4,7.9,'C',{'a','l','o','k','\0'}};
struct demo d={3,6.8,'A',"ramu"};
void main()
{
 clrscr();
struct demo o={4,5.8,'B',"suresh"};
 printf("%d %f %c %s",o.a,o.b,o.ch,o.str);
 printf("\n%d %f %c %s",d.a,d.b,d.ch,d.str);
 printf("\n%d %f %c %s",t.a,t.b,t.ch,t.str);
 getch();
}