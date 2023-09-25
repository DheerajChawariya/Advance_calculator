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
 void display()
 {
  cout<<"a="<<a<<" b="<<b<<endl;
 }
};
void main()
{
 clrscr();
 memo m;
 m.fun(5);
 m.fun1(6);
 m.display();
}
