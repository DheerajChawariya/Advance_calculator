#include<iostream.h>
#include<conio.h>
class demo
{
    public:
    int a;
    void fun(int n)
    {
    a = n;
    }
};
    class memo:virtual public demo
    {
    public:
     int b;
     void fun1(int b)
    {
    this ->b = b;
    }
    };
    class remo:public virtual demo
    {
     public:
     int c;
     void fun2(int c)
     {
     this ->c = c;
     }
     };
     class rock:public memo,public remo
     {
     public:
     void display()
     {
     cout<<"a="<<a<<"\tb="<<b<<"\tc="<<c;
     }
     };
     void main()
     {
     clrscr();
       rock o;
       o.fun(5);
       o.fun1(3);
       o.fun2(7);
       o.display();
       }
