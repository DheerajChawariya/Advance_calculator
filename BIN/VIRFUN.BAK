#include<iostream.h>
#include<conio.h>
class demo
{
 public:
virtual void fun()
{
 cout<<"hello";
}
};
class memo:public demo
{
public:
void fun()
 {
  cout<<" friend";
 }
};
void main()
{
clrscr();
 demo o,*p;
 memo m;
 p=&o;
 p->fun();  //(*p).fun();
 p=&m;
 p->fun();
}


