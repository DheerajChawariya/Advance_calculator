/*WAP binary+ operator overloading with many object with retun object*/
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
 demo operator+(demo &t);
};
demo demo::operator+(demo &t)
{
demo l;
l.a=a+t.a;
l.b=b+t.b;
return l;
}
void main()
{
 clrscr();
 demo o(7,4),o1(4,5),o2(6,7),d;
 cout<<"before binary- operator overloading\n";
 o.display("object o=\n");
 o1.display("object o1=\n");
 o2.display("object o2=\n");
 d.display("object d=\n");
 d=o+o1+o2;       //compiler assume like a temp=o.operator+(o1);
 cout<<"After binary- operator overloading\n";//d=temp+o2;d=temp.operator+(o2);
 o.display("object o=\n");
 o1.display("object o1=\n");
 o2.display("object o2=\n");
 d.display("object d=\n");
}


