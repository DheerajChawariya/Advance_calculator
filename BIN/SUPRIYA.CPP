#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a,b;
// demo *this;
 void fun(int a,int b)
 {
  this->a=a;
  (*this).b=b;
 }
 void display()
 {
  cout<<"a="<<a<<" b="<<b<<endl;
 }
};
void main()
{
clrscr();
 demo d,o;
 d.fun(5,7);
 o.fun(3,4);
 d.display();
 o.display();
}
