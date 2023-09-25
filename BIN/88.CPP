#include<iostream.h>
#include<conio.h>
class demo
{
public:
 int a,b;   //data member or member variable
 float c,d;
 char ch,ch1;
}*p;
void main()
{
clrscr();
demo d={8,5,9.8,2.3,'A','B'};//d is of struct demo type variable
cout<<sizeof(demo)<<endl;
cout<<(unsigned)&d.a<<" "<<(unsigned)&d.b<<" "<<(unsigned)&d.c<<" "<<(unsigned)&d.d<<" "<<(unsigned)&d.ch<<" "<<(unsigned)&d.ch1<<endl;
p=&d;
cout<<d.a<<" "<<(&d)->b<<" "<<p->c<<" "<<(*p).d<<" "<<d.ch<<" "<<d.ch1;
}


