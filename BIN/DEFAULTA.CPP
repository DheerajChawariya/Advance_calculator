#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 int x,y,z;
 demo(int x=1,int y=45,int z=3)
 {
  this->x=x;
  this->y=y;
  this->z=z;
 }
 void display(char s[])  //void display(char *s)
 {
  cout<<s<<"\nx="<<x<<"\ty="<<y<<"\tz="<<z<<endl;
 }
};
void main()
{
 clrscr();
 demo d,d1(7);//implicit calling
 demo d2=demo(8,6);  //explicit calling
 demo d3=demo(4,8,9); //expilicit calling
 d.display("object d=");
 d1.display("object d1=");
 d2.display("object d2=");
 d3.display("object d3=");
}