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
 int a;    //memo::a                         //demo::a
 void fun(int a)
 {                                    //demo::fun(int a)
  this->a=a;
 }
 void display()
 {
  cout<<"member of demo class a="<<demo::a<<"\nmember of memo class a="<<memo::a<<endl;
 }
};
void main()
{
 clrscr();
 memo m;
 m.demo::fun(5);
 m.fun(6);      //m.memo::fun(6);
 m.display();
}
