//WAP to outside function definatiom
#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 void fun(); //member function
};
void demo::fun()
{
 cout<<"hello";
}
void fun() //normal function(non member function)
{
 cout<<" friend";
}
void main()
{
clrscr();                     //::  scope resolution operator
 demo d;
 d.fun();
 fun();
}
    /*
    return_type class_name::function_name(argument list)
    {
      function_body
    }
    */
