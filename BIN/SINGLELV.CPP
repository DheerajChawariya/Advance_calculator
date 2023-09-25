#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a;
 void fun(int n)
 {
  a=n;
 }
};
class memo:public demo
{
 public:
 int a;    //memo::a                     //demo::a
 void fun(int n)               //demo::fun(int n)
 {
  a=n;
  }
 void display()
 {
  cout<<"member of demo class="<<demo::a;
  cout<<"\nmember of memo class="<<memo::a;
  cout<<"\nmember of memo class="<<a;
 }
};
void main()
{
 clrscr();
 memo m;
 m.demo::fun(5);
 m.fun(6);                       //m.memo::fun(6);
 m.display();
}