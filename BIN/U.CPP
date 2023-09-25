/*WAP initializing of structure type variable*/
#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;   //data member(member variable)
 float b;
 char ch,str[30];
};
void main()
{
 demo o={4,5.8,'B',"suresh"};
 clrscr();
 printf("%d %f %c %s",a,o.b,o.ch,o.str);
 getch();
}