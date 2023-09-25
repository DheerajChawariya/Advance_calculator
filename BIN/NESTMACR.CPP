#include<stdio.h>
#include<conio.h>
#define A 5              //simple macroo
#define B A*2            //nested macro
#define SQR(A) (A)*(A)   //macro with argument
#define CUBE(A) (SQR(A)*(A))   //nested macro
void main()
{
 clrscr();
 printf("%d",B);
 printf("\n%d",SQR(2+3));
 printf("\n%d",CUBE(4+2));
 getch();
}