#include<iostream.h>
#include<conio.h>
class demo
{
 public:                         //  :: scope resolution operator
 void fun(); //declaration
};
void demo::fun() //defination
{
 cout<<"hello";      //returntype class_name::function_name(argument)
}                    //    {
void fun()              //        function body
{                       //   }
 cout<<" friend";
}
void main()
{
 clrscr();
 demo d;
 d.fun();  //calling
 fun();
}



