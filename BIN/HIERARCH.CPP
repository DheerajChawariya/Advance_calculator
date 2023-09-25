#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a;
 void fun(int a)
 {
  this->a=a;
 }
};
class memo:public demo
{
 public:
 int b;
 void fun1(int b)
 {
  this->b=b;
 }
 void add()
 {
 cout<<"\nadd="<<a+b;
 }
};
class remo:public demo
{
public:
int b;
void fun1(int b)
{
this->b=b;
}
void sub()
{
cout<<"\nsub="<<a-b;
}
};
void main()
{
clrscr();
memo m;
m.fun(3);
m.fun1(3);
m.add();
remo r;
r.fun(3);
r.fun1(2);
r.sub();
}

