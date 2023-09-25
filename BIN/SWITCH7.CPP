#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int y;
 printf("enter year");
 scanf("%d",&y);
 if(y%100==0&&y%400==0)
  printf("leap year");
else if(y%100!=0&&y%4==0)
  printf("leap year");
  else
  printf("not");
}




