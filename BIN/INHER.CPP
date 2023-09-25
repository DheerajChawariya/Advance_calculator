#include<iostream.h>
#include<conio.h>
class demo
{
 int a;
 protected:
 void fun(int a)
 {
  this->a=a;
 }
 int geta()  //accessor function
 {
  return a;
 }
};
class memo:public demo
{
 int b;
 public:
 void fun(int a,int b)
 {
  demo::fun(a);
  this->b=b;
 }
 void display()
 {
  cout<<"add="<<geta()+b;
 }
};
void main()
{
 clrscr();
 memo m;
 m.fun(5,7);
 m.display();
}