#include<iostream.h>
#include<conio.h>
class demo
{
int a;
protected:
void fun(int a)
{
this->a=a;
}
public:
int geta()
{
return a;
}
};
class memo :protected demo
{
int b;
public:
void fun(int b)
{
demo::fun(4);
this->b=b;
}
void display()
{
cout<<"a="<<geta()<<"\tb="<<b;
}
};
void main()
{
clrscr();
memo m;
m.fun(3);
m.display();
}