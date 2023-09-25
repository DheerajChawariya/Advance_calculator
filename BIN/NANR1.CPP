/*WAP to NANR concept*/
#include<iostream.h>                                                                                                                    n
#include<conio.h>
void fun() //before calling behave like that prototype after calling behave like that called function
{
 cout<<"\nhello friend";     //printf("\nhello friend");
}
void fun1() //called function(defination)
{
  cout<<"\nhow are you";      //printf("\nhow are you");
}
void main()
{
 clrscr();
 cout<<"\nstarting in main()";      //printf("\nstarting in main()");
  fun();   //calling function
 fun();  //calling function
 cout<<"\nend task";
 getch();                            //printf("\nend task");
}
