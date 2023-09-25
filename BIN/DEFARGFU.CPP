#include<iostream.h>
#include<conio.h>
void fun(int x=89,int y=3,int z=18)    //default argument function
 {
  cout<<x<<" "<<y<<" "<<z<<endl;
 }
void main()
{
 clrscr();
 fun();
 fun(5);
 fun(7,8);
 fun(1,5,8);
}