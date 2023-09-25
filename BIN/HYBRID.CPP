#include<iostream.h>       +
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
};
 class remo
{
 public:
 int c;
 void fun2(int c)
 {
 this->c=c;
 }
};
class rock:public memo,public remo
{
 public:
 int d;
 void fun3(int d)
 {
 this->d=d;
 }
 void display()
 {
  cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c<<"\td="<<d;
 }
};
void main()
{
 clrscr();
 rock r;
 r.fun(7);
 r.fun1(2);
 r.fun2(4);
 r.fun3(1);
 r.display();
}
