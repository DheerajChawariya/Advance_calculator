#include<iostream.h>
#include<conio.h>
class demo
{
 void fun()
 {
  cout<<"hello";
 }
 public:
 void display()
 {
 this->fun(); //(*this).fun();  //fun();
  cout<<" friend";
 }
};
void main()
{
 clrscr();
 demo d;
 d.display();
 getch();
}

