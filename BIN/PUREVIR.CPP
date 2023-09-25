#include<iostream.h>
#include<conio.h>
class demo
{
 public:
virtual void fun()=0; //pure virtual function or abstract function
};
class memo:public demo
{
public:
void fun()
 {
  cout<<"hello";
 }
};
void main()
{
clrscr();
 demo *p;
 memo m;
 p=&m;
 p->fun();
}


