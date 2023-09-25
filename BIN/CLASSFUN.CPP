#include<iostream.h>       //::  scope resolution operator
#include<conio.h>       //return_type class_name::function_name(argument list)
class demo              //           {
{                         //          function body
 public:                  //         }
 void fun();   //function declaration
};
 void demo::fun() //outside function defination
 {
   cout<<"hello friend";
 }
void main()
{

clrscr();
 demo d;
 d.fun();
}
