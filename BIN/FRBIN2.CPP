/*WAP binary- operator overloading with friend keyword between object and
integer value with return object*/
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
friend demo operator-(demo &t,int n);
};
demo operator-(demo &t,int n)
{
demo l;
l.a=t.a-n;
l.b=t.b-n;
return l;
}
void main()
{
 clrscr();
 demo o(7,8),d;
 cout<<"before binary- operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
 d=o-3;     //compiler treat like a d=operator-(o,3);
 cout<<"After binary- operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
}
