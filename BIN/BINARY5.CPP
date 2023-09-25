/*WAP binary +,*,/,- operator overloading*/
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
 demo operator-(demo &t);
 demo operator*(demo  &t);
 demo operator/(demo &t);
};
demo demo::operator+(demo &t)
{
demo l;
l.a=a+t.a;
l.b=b+t.b;
return l;
}
demo demo::operator-(demo &t)
{
demo l;
l.a=a-t.a;
l.b=b-t.b;
return l;
}
demo demo::operator*(demo &t)
{
demo l;
l.a=a*t.a;
l.b=b*t.b;
return l;
}
demo demo::operator/(demo &t)
{
demo l;
l.a=a/t.a;
l.b=b/t.b;
return l;
}
void main()
{
 clrscr();
 demo o(7,4),o1(4,5),o2(6,7),o3(2,4),o4(7,3),d;
 cout<<"before binary operator overloading\n";
 o.display("object o=\n");
 o1.display("object o1=\n");
 o2.display("object o2=\n");
 o3.display("object o3=\n");
 o4.display("object o4=\n");
 d.display("object d=\n");

 d=o+o1*o2-o3/o4;                //compiler assume like a t=o1.operator*(o2);
 cout<<"After binary operator overloading\n"; //d=o+t-o3/o4;
					      // d=o+t-o3.operator/(o4);
d.display("object d=\n");                   //d=o+t-obj;
}                                            //d=o.operator+(t)-obj
					     //d=p-obj;
