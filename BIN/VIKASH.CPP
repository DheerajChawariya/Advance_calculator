#include<iostream.h>
#include<conio.h>
struct demo
{
 int a,b;   //data member or member variable
 float c,d;
 char ch,ch1;
};
void main()
{
clrscr();
demo d={8,5,9.8,2.3,'A','B'};//d is of struct demo type variable
//cout<<sizeof(demo)<<endl;
//cout<<(unsigned)&d.a<<" "<<(unsigned)&d.b<<" "<<(unsigned)&d.c<<" "<<(unsigned)&d.d<<" "<<(unsigned)&d.ch<<" "<<(unsigned)&d.ch1<<endl;
cout<<d.a<<" "<<d.b<<" "<<d.c<<" "<<d.d<<" "<<d.ch<<" "<<d.ch1;
}


