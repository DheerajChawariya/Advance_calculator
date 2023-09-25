/*WAP to inside definatiom*/
#include<iostream.h>
#include<conio.h>
class demo
{
 public:
 void fun(); //declaration  of member function
};
void fun() //non-member fuction of class
{
 cout<<" friend";
}
void main()
{
 clrscr();
 demo d;
 d.fun();
 fun();
}
void demo::fun()  //outside function defination of member function
{
 cout<<"hello";
}

 /*

   ::  scope resolution opertor

    syntax of outside function defination
      return_type class_name::function_name(argument_list)
      {
       function_body
      }

*/