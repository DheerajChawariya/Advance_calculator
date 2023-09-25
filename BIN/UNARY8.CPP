/*WAP unary  pre and post increment & decrement operator overloading
using with return object*/
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
 demo operator++();
 demo operator++(int);
  demo operator--();
 demo operator--(int);
};
demo demo::operator++() //pre increment
{
demo l;
l.a=++a;
l.b=++b;
return l;
}
demo demo::operator++(int)    //postincrement
{
demo l;
l.a=a++;
l.b=b++;
return l;
}
demo demo::operator--()     //pre decrement
{
demo l;
l.a=--a;
l.b=--b;
return l;
}
demo demo::operator--(int)  //post decrement
{
demo l;
l.a=a--;
l.b=b--;
return l;
}
void main()
{
clrscr();
 demo o(7,4),d;
 cout<<"before unary post increment operator overloading\n";
 o.display("object o=\t");
 d.display("object d=\t");
 d=o++;     //compiler assume like a d=o.operator++(0);
 cout<<"After unary post increment operator overloading\n";
 o.display("object o=\t");
 d.display("object d=\t");
  demo o1(7,4),d1;
 cout<<"before unary pre increment operator overloading\n";
 o1.display("object o1=\t");
 d1.display("object d1=\t");
 d1=++o1;     //compiler assume like a d=o.operator++();
 cout<<"After unary pre increment operator overloading\n";
 o1.display("object o1=\t");
 d1.display("object d1=\t");
 demo o2(7,4),d2;
 cout<<"before unary post deccrement operator overloading\n";
 o2.display("object o2=\t");
 d2.display("object d2=\t");
 d2=o2--;     //compiler assume like a d=o.operator--(0);
 cout<<"After unary post deccrement operator overloading\n";
 o2.display("object o2=\t");
 d2.display("object d2=\t");
  demo o3(7,4),d3;
 cout<<"before unary pre decrement operator overloading\n";
 o3.display("object o3=\t");
 d3.display("object d3=\t");
 d3=--o3;     //compiler assume like a d=o.operator--();
 cout<<"After unary pre decrement operator overloading\n";
 o3.display("object o3=\t");
 d3.display("object d3=\t");
}
