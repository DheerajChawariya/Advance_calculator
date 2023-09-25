#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a,b;
 demo()
 {
 a=0;
 b=0;
 }
 demo(int a,int b)
 {
 this->a=a;
 this->b=b;
 }
 demo fun()
 {
  demo temp;
  temp.a=-a;
  temp.b=-b;
 return temp;
 }
void display()
{
 cout<<"\na="<<a<<" b="<<b;
}
};
void main()
{
 demo d(6,7),obj;
 obj=d.fun();
 d.display();
 obj.display();
}
