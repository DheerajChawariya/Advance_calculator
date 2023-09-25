/*WAP binary- operator overloading with friend keyword between object and
integer value*/
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
friend void operator-(int n,demo &t);
};
void operator-(int n,demo &t)
{
t.a=n-t.a;
t.b=n-t.b;
}
void main()
{
 clrscr();
 demo o(7,8);
 cout<<"before binary- operator overloading\n";
 o.display("object o=\n");
 3-o;     //compiler treat like a operator-(3,o);
 cout<<"After binary- operator overloading\n";
 o.display("object o=\n");
}
