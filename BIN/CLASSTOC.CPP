#include<iostream.h>
#include<conio.h>
class first
{
 int fx;
 public:
 first()
 {
 }
 first(int x)
 {
  fx=x;
 }
 int getfx()
 {
  return fx;
 }
void showf()
{
 cout<<"fx="<<fx<<endl;
}
};
class second
{
 int sx;
 public:
 second()
 {
 }
 second(int x)
 {
 sx=x;
 }

 void operator=(first obj)
 {
  sx=obj.getfx()*obj.getfx();
 }
void shows()
{
 cout<<"sx="<<sx<<endl;
}
};
void main()
{
clrscr();
 first f(10);
 second s(20);
 cout<<"before conversion\n";
 f.showf();
 s.shows();
 s=f;
 cout<<"after conversion\n";
 f.showf();
 s.shows();
}



