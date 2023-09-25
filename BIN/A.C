#include<iostream.h>
#include<conio.h>
struct demo
{
 int a;
 float b;
 char ch,str[50];
}o={4,9.2,'A',"ankit"};
struct demo o1={6,8.2,';B',"ramu"};
void main()
{
   clrscr();
   demo o2={15,18.2,'c',"lalu"};
   cout<<o.a<<" "<<o.b<<" "<<o.ch<<" "<<o.str<<endl;
   cout<<o1.a<<" "<<o1.b<<" "<<o1.ch<<" "<<o1.str<<endl;
   cout<<o2.a<<" "<<o2.b<<" "<<o2.ch<<" "<<o2.str<<endl;
   getch();
}