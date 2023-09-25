/*how to use value of private data member inside derived class*/
#include<iostream.h>
#include<conio.h>
class demo
{
 int a;
 public:
 void fun(int a)
 {
  this->a=a;
 }
 protected:
 int geta()       //accessor function
 {
  return a;
 }
};
class memo:public demo
{
 int b;
 public:
 void fun(int b)
 {
  this->b=b;
 }
 void display()
 {
  cout<<"a="<<geta()<<"\tb="<<b;
 }
};
void main()
{
 clrscr();
 memo m;
 m.demo::fun(3);
 m.fun(1);
 m.display();
}

