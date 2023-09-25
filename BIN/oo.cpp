#include<iostream.h>
#include<conio.h>
class demo
{
 public:
  int a;
friend void operator-(demo &t,int n);
};
void operator-(demo &t,int n)
{
 t.a=t.a-n;
}
void main()
{
 demo d={6};
 cout<<d.a<<endl;
//   d-6;
 operator-(d,6);
 cout<<d.a;
}

