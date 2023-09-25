#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a,b;
 demo(int a,int b)
 {
 this->a=a;
 this->b=b;
 }
 demo(demo &t)
 {
 a=t.a;
 b=t.b;
 }
 void display()
 {
 cout<<"\na="<<a<<"\tb="<<b;
 }
};
void main()
{
 clrscr();
 demo o(5,7),o1(o);
 demo o2=demo(o);
 o.display();
 o1.display();
 o2.display();
}