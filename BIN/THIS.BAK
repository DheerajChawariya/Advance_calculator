#include<iostream.h>
#include<conio.h>
class demo
{
 int a,b;
					       // demo *this;
 public:
 void fun(int a,int b) // void fun(int n,int m)
 {                     //    {
    (*this).a=a;               //      a=n;     //this->a=n;
    (*this).b=b;              //       b=m;     //(*this).b=m;
 }                  //       }
 void display()
 {
  cout<<"\na="<<a<<" b="<<b;
 }
};
void main()
{
 clrscr();
 demo d,o;
 d.fun(7,5);
 o.fun(6,7);
 d.display();
 o.display();
}