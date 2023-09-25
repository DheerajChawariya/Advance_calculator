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
friend demo operator-(int n,demo &d);
};
demo operator-(int n,demo &d)
{
demo t;
t.a=n-d.a;
t.b=n-d.b;
return t;
}
void main()
{
clrscr();
 demo o(7,8),d;
 cout<<"before binary- operator overloading\n";
 o.display("object o=\n");
 d=3-o;     //compiler treat like a operator-(3,o);
 cout<<"After binary- operator overloading\n";
d.display("object o=\n");
}
