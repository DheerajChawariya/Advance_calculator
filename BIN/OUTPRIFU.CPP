#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a,b;
 void fun()
 {
  cout<<"enter two number";
  cin>>a>>b;
 }
};
void display(demo &o)
{
 cout<<"a="<<o.a<<" b="<<o.b;
}
void main()
{
 demo d,d1;
 d.fun();
 d1.fun();
 display(d);
 display(d1);
}