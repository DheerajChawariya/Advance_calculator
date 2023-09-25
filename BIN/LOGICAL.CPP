#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int result,a=45;
 result=(a>=2) && (a%2!=0) || (a=34) || (a=9);
 printf("a=%d result=%d",a,result);
 getch();
}