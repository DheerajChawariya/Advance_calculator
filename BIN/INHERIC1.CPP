#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int l,b;
 demo(int l,int b)
 {
 this->l=l;
 this->b=b;
 }
 void rect()
 {
  cout<<"area of rectangle="<<l*b;
 }
 ~demo()
 {
  cout<<"\ndestructor in demo";
 }
};
class memo:public demo
{
  public:
  int h;
  memo(int l,int b,int h):demo(l,b)
  {
   this->h=h;
  }
  void cuboid()
  {
  cout<<"\nvolume of cuiboid="<<l*b*h;
  }
  ~memo()
  {
  cout<<"\ndestructor in memo";
  }
};
void main()
{
 clrscr();
 memo m(6,7,3);
 m.rect();
 m.cuboid();
}






