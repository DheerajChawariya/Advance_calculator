#include<iostream.h>
#include<conio.h>
class demo
{
int a,b;
 public:
 demo(int n)     //one parameterized constructor
 {
  a=n;
  b=n;
 }
 demo(int n,int m)
 {
  a=n;
  b=m;
 }
void display()
{
 cout<<"\na="<<a<<" b="<<b;
}
};
void main()
{
 demo d(5),d1(9,3);   //implicit calling
 demo d2=demo(4,8);  //explicit calling
 d.display();
 d1.display();
 d2.display();
}
