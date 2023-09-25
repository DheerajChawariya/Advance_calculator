#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 demo()   //default constructor or zero argument constructor
 {
  cout<<"hello";
 }
};
void main()
{
clrscr();
 demo d,d1;   //implicit calling
 demo d2=demo();   //explicit calling
}