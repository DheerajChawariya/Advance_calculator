/*WAP initializing of structure type variable*/
#include<stdio.h>
#include<conio.h>
struct demo
{
 int a;   //data member(member variable)(instatnce variable)
};
void main()
{
 struct demo o={4},*p;
 clrscr();
 p=&o;
 printf("%d %d %d %d",o.a,(&o)->a,(*p).a,p->a);
 getch();
}