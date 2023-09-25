#include<iostream.h>
#include<conio.h>
class demo
{
 public:
static void fun();//static function or class function
};
void demo::fun()
{
 cout<<"\nhello";
}
void main()
{
clrscr();
 demo::fun();
 demo d;
 d.fun();
 getch();
}
