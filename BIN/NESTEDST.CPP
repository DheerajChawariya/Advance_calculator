/*WAP nested structure first method*/
#include<iostream.h>
#include<conio.h>
struct remo
{
 int c;
};
struct memo
{
 int b;
 struct remo r;
};
struct demo
{
 int a;
 struct memo m;
};
void main()
{
 clrscr();
demo d={3,5,7};
/* d.a=9;
 d.m.b=7;
 d.m.r.c=1;*/
 cout<<d.a<<" "<<d.m.b<<" "<<d.m.r.c<<endl;
 getch();
}