#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 static int a,b; //static data member or class variable
};
int demo::a;
int demo::b=8;
void main()
{
 clrscr();
 demo d,o;
 cout<<demo::a<<" "<<d.a<<" "<<o.a<<endl;
 o.a=3;
 cout<<demo::a<<" "<<d.a<<" "<<o.a<<"\n";
 d.a=1;
 cout<<demo::a<<" "<<d.a<<" "<<o.a<<'\n';
 demo::a=4;
 cout<<demo::a<<" "<<d.a<<" "<<o.a<<endl;
 cout<<d.b<<"\n";
 cout<<demo::a<<" "<<demo::b;
}
