#include<stdio.h>
#include<conio.h>
void fun(char ch)
{
 printf("\n%c",ch);
}
void main()
{
 clrscr();
 fun('A');
 char ch=65;
 fun(ch);
 getch();
}