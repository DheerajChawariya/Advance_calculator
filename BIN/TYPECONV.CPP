//example of typecasting
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 printf("original number %f",45.34);
 printf("\ninteger part=%d",(int)45.34); //typecasting example
 printf("\nfractional part=%f",45.34-(int)45.34); //both conversion
 getch();
}                           //45.34-45             45.34-45.00=0.34