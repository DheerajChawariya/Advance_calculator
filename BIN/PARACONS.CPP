#include<iostream.h>
#include<conio.h>
class demo
{
 int a,b;
 public:
 demo(int n)
 {
  a=n;
  b=n;
 }
 demo(int a,int b)
 {
  this->a=a;
  this->b=b;
 }
 void display()
 {
  cout<<"a="<<a<<" b="<<b<<endl;
 }
};
void main()
{
 clrscr();
 demo d(5);   //implicit calling\
 demo d1=demo(2,3);//explicit calling
 d.display();
 d1.display();
}


