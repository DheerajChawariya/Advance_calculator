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
class memo
{
 public:
 int b;
 void fun1(int b)
 {
  this->b=b;
 }
};
class remo:public demo,public memo
{
 public:
 int c;
 void fun2(int c)
 {
  this->c=c;
 }
 void display()
 {
  cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c;
 }
};
void main()
{
 clrscr();
 remo r;
 r.fun(5);
 r.fun1(3);
 r.fun2(1);
 r.display();
}