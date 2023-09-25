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
friend void operator-(demo &d,int n);
};
void operator-(demo &d,int n)
{
d.a=d.a-n;
d.b=d.b-n;
}
void main()
{
clrscr();
 demo o(7,8);
 cout<<"before binary- operator overloading\n";
 o.display("object o=\n");
 o-3;     //compiler treat like a operator-(o,3);
 cout<<"After binary- operator overloading\n";
 o.display("object o=\n");
}
