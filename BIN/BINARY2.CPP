/*WAP binary- operator overloading between object and integer value
with return object*/
#include<iostream.h>
#include<conio.h>
class demo
{
 int a,b;
 public:
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
 demo operator-(int n);
};
demo demo::operator-(int n)
{
demo l;
l.a=a-n;
l.b=b-n;
return l;
}
void main()
{
clrscr();
 demo o(7,8),d;
 cout<<"before binary- operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
 d=o-3;     //compiler treat like a d=o.operator-(3);
 cout<<"After binary- operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
}
