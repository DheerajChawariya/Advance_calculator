/*WAP unary~(one's complement) operator overloading with friend keyword*/
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
 void display(char *s)
 {
  cout<<s<<"a="<<a<<"\tb="<<b<<endl;
 }
friend void operator~(demo &d);
};
void operator~(demo &d)
{
d.a=~d.a;
d.b=~d.b;
}
void main()
{
 clrscr();
 demo o(7,-4);
 cout<<"before unary- operator overloading\n";
 o.display("object o=\n");
 ~o;     //compiler assume like a operator~(o);
 cout<<"After unary- operator overloading\n";
 o.display("object o=\n");
}
