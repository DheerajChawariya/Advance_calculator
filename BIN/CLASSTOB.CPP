#include<iostream.h>
#include<conio.h>
class circle
{
 float rad;
 public:
  circle(float x)
  {
   rad=x;
  }
 operator double()
 {
 return 3.14*rad*rad;
 }
};
void main()
{
 clrscr();
 circle d(2.3);
 double area=d;
 cout<<"area of circle="<<area<<endl;
 getch();
}
