/*reference object as a function argument*/
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
 void fun(int n,int m)
 {
  a=n;
  b=m;
 }
 void change(demo &t)
 {
  t.a=t.a*3;     //t.a*=3;
  t.b=t.b+4;     //t.b+=4;
  a=t.a;
  b=t.b;
 }
};
void main()
{
 clrscr();
 demo d,o;
 cout<<d.a<<" "<<d.b<<" "<<o.a<<" "<<o.b<<endl;
 d.fun(7,8);
 cout<<"befor calling\n";
 cout<<d.a<<" "<<d.b<<endl;
 o.change(d);
 cout<<"after called\n";
 cout<<d.a<<" "<<d.b<<" "<<o.a<<" "<<o.b;
}

