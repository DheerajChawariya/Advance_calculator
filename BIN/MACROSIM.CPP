/*macro substitution and symboloc constants*/
//simple macro
#include<stdio.h>
#include<conio.h>
#define A 5
#define B 5+3
#define  C 7-2
#define aman (7+3)
#define mohit (3+4)
void main()
{
 clrscr();
 printf("%d",A);
 printf("\n%d",B*C);          //5+3*7-2=24  5+21-2
 printf("\n%d",(B)*(C));      //(5+3)*(7-2)
 printf("\n%d",aman*mohit);  //(7+3)*(3+4)
 getch();
}