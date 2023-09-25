#include<stdio.h>
#include<conio.h>
#define aman(A,B) A*B
#define mohit(A,B) (A)*(B)
void main()                              //5+3*7-3
{
 clrscr();
 printf("\n%d",aman(5+3,7-3));
 printf("\n%d",aman((5+3),(7-3)));   //(5+3)*(7-3)
 printf("\n%d",mohit(5+3,7-3));
 getch();
}