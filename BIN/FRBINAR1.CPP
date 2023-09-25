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
friend demo operator-(int n,demo &t);
};
demo operator-(int n,demo &t)
{
demo l;
l.a=n-t.a;
l.b=n-t.b;
return l;
}
void main()
{
 clrscr();
 demo o(7,8),d;
 cout<<"before binary- operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
 d=3-o;     //compiler treat like a operator-(3,o);
 cout<<"After binary- operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
}
