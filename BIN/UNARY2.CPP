/*WAP unary ~(one's complement) overloading without friend keyword*/
#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int a,b;
 demo()       //default constructor or zero argument constructor
 {
  a=0;
  b=0;
 }
 demo(int a,int b) //parameterized constructor
 {
 this->a=a;
 this->b=b;
 }
 void display(char *s)    //normal function
 {
  cout<<s<<"a="<<a<<"\tb="<<b<<endl;
 }
 void operator~();   //operator function declare
};
void demo::operator~()      //operator function defination
{
a=~a;
b=~b;
}
void main()
{
clrscr();
 demo o(7,-4);
 cout<<"before unary- operator overloading\n";
 o.display("object o=\n");
 ~o;     //compiler assume like a o.operator~();
 cout<<"After unary- operator overloading\n";
 o.display("object o=\n");
}
