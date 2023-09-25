//WAP to outside function definatiom
#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 void fun() //member function
 {
  cout<<"hello";
 }
};
void fun() //normal function(non member function)
{
 cout<<"friend";
}
void main()
{
clrscr();
 demo d;
 d.fun();
 fun();
}
