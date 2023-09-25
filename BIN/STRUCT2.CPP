#include<iostream.h>
#include<conio.h>
union demo
{
 int a;
 float b;
 char ch,str[50];
}o={4};
demo o1={6};

void main()
{
   clrscr();
   demo o2={15};
   cout<<o.a<<" "<<o.b<<" "<<o.ch<<" "<<o.str<<endl;
   cout<<o1.a<<" "<<o1.b<<" "<<o1.ch<<" "<<o1.str<<endl;
    cout<<o2.a<<" "<<o2.b<<" "<<o2.ch<<" "<<o2.str<<endl;
   getch();
}