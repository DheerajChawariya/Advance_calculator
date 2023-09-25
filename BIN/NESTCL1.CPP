/*WAP nested class or containership or consisement or aggregation
or containment or composition of two classes*/
#include<iostream.h>
#include<conio.h>
class rect
{
 public:
 int l,b;
 void fun(int l,int b)
 {
  this->l=l;
  this->b=b;
 }
 void area()
 {
 cout<<"\narea of rectangle="<<l*b;
 }
};
class cuboid
{
public:
  rect r;
  int h;
  void fun(int l,int b,int h)
  {
   r.fun(l,b);
   this->h=h;
  }
  void volume()
  {
   cout<<"\nvolume of cuboid="<<r.l*r.b*h;
  }
 };
void main()
{
 clrscr();
 cuboid c;
  c.fun(6,5,3);
  c.r.area();
  c.volume();
}

