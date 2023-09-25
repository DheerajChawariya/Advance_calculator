/*WAP unary pre and post increment operator overloading with return object*/
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
 demo operator++();    //declaration of pre increment operator function
 demo operator++(int); //declaration of post increment operator function
};
demo demo::operator++() //defination of pre increment operator function
{
demo l;
l.a=++a;
l.b=++b;
return l;
}
demo demo::operator++(int) //defination of post increment operator function
{
demo l;
l.a=a++;
l.b=b++;
return l;
}
void main()
{
 clrscr();
 demo o(7,4),d;
 cout<<"before unary post increment operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
 d=o++;     //compiler assume like a d=o.operator++(0);
 cout<<"After unary post increment operator overloading\n";
 o.display("object o=\n");
 d.display("object d=\n");
  demo o1(7,4),d1;
 cout<<"before unary pre increment operator overloading\n";
 o1.display("object o1=\n");
 d1.display("object d1=\n");
 d1=++o1;     //compiler assume like a d=o1.operator++();
 cout<<"After unary pre increment operator overloading\n";
 o1.display("object o1=\n");
 d1.display("object d1=\n");
}
