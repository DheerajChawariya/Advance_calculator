#include<iostream.h>
#include<conio.h>
class demo
{
 int a,b;
 public:
 void fun(int n,int m)  //normal function
 {
  a=n;
  b=m;
 }
 int geta() //accessor function
 {
  return a;
 }
 int getb() //accessor function
 {
  return b;
 }
};
void main()
{
 clrscr();
 demo d,o;
 d.fun(6,7);
 cout<<"a="<<d.a<<"\tb="<<d.getb()<<endl;
 o.fun(3,89);
 cout<<"a="<<o.geta()<<"\tb="<<o.getb();

 }