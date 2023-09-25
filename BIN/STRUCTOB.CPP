#include<iostream.h>
#include<conio.h>
struct demo
{
 int a,b;
 float c,d;    //member variable or data member or instance variable
 char ch,ch1;
}obj;                                          //global object
demo obj2;
void main()
{
clrscr();
 struct demo obj1;                //demo obj1;
cout<<(unsigned)&obj.a<<" "<<(unsigned)&obj.b<<" "<<(unsigned)&obj.c<<" "<<(unsigned)&obj.d<<" "<<(unsigned)&obj.ch<<" "<<(unsigned)&obj.ch1<<endl;
cout<<(unsigned)&obj1.a<<" "<<(unsigned)&obj1.b<<" "<<(unsigned)&obj1.c<<" "<<(unsigned)&obj1.d<<" "<<(unsigned)&obj1.ch<<" "<<(unsigned)&obj1.ch1<<endl;
cout<<(unsigned)&obj2.a<<" "<<(unsigned)&obj2.b<<" "<<(unsigned)&obj2.c<<" "<<(unsigned)&obj2.d<<" "<<(unsigned)&obj2.ch<<" "<<(unsigned)&obj2.ch1<<endl;
cout<<sizeof(demo)<<" "<<sizeof(obj)<<" "<<sizeof(obj1)<<" "<<sizeof(obj2)<<endl;
cout<<obj.a<<" "<<obj.b<<" "<<obj.c<<" "<<obj.d<<" "<<obj.ch<<" "<<obj.ch1<<endl;
cout<<obj1.a<<" "<<obj1.b<<" "<<obj1.c<<" "<<obj1.d<<" "<<obj1.ch<<" "<<obj1.ch1<<endl;
cout<<obj2.a<<" "<<obj2.b<<" "<<obj2.c<<" "<<obj2.d<<" "<<obj2.ch<<" "<<obj2.ch1<<endl;
}