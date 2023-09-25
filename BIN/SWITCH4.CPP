#include<stdio.h>
#include<conio.h>
void main()
{
 int y;
 clrscr();
 printf("enter year");
 scanf("%d",&y);
 switch((y%100==0&&y%400==0)||(y%100!=0&&y%4==0))
 {
  case 1:
  printf("leap year");
  break;
  default:
  printf("not");
 }
}




