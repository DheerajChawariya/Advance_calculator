#include<iostream.h>
#include<conio.h>
class memo;  //pre declaration
class demo
{
 int a;
 public:
 demo(int a)
 {
 this->a=a;
 }
 void display()
 {
  cout<<"a="<<a;
 }
 friend void swap(demo&,memo&);
};
class memo
{
int b;
public:
memo(int b)
{
this->b=b;
}
void display1()
{
 cout<<"\tb="<<b;
}
friend void swap(demo&,memo&);
};
void swap(demo &d,memo &m)
{
int temp;
temp=d.a;
d.a=m.b;
m.b=temp;
}
void main()
{
 clrscr();
 demo d(5);
 memo m(3);
 cout<<"\nbefore swap=\n";
 d.display();
 m.display1();
 swap(d,m);
 cout<<"\nafter swap=\n";
 d.display();
 m.display1();
}