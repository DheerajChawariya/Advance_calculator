#include<iostream.h>
#include<conio.h>
void fun1();    //prototype(declaration)
void fun();    //prototype(declaration)
void main()
{
 clrscr();
 cout<<"\nstarting in main()";
 fun();   //calling function
 fun1();  //calling function
 cout<<"\nending in main";
 getch();
}
void fun() //called function(defination)
{
 cout<<"\nhello friend";
}
void fun1() //called function(defination)
{
  cout<<"\nhow are you";
}

