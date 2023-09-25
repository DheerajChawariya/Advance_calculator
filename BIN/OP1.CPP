#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a;
 void operator-(int n);
};
void demo::operator-(int n)
{
 a=a-n;
}
void main()
{
 clrscr();
 demo d={5};
 cout<<d.a<<endl;
 d-3;     //d.operator-(3);
 cout<<d.a;
 getch();
}
