/*WAP unary pre & post increment operator overloading with friend keyword
with return object*/
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
friend demo operator++(demo&);
friend demo operator++(demo&,int);
};
demo operator++(demo &t)  //pre increment
{
demo l;
l.a=++t.a;
l.b=++t.b;
return l;
}
demo operator++(demo &t,int)  //post increment
{
demo l;
l.a=t.a++;
l.b=t.b++;
return l;
}
void main()
{
clrscr();
 demo o(7,4),d;
 cout<<"before unary post increment operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
 d=o++;     //compiler assume like a d=operator++(o,1);
 cout<<"After unary post increment operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
  demo o1(7,4),d1;
 cout<<"before unary pre increment operator overloading\n";
 o1.display("object o1=\n");
 d1.display("object d1=\n");
 d1=++o1;     //compiler assume like a d=operator++(o1);
 cout<<"After unary pre increment operator overloading\n";
 o1.display("object o1=\n");
 d1.display("object d1=\n");
}
