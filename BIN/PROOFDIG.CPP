#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,p=1;
 printf("enter number");
 scanf("%ld",&n);
 for(;n>0;)
 {
  p=p*(n%10);
  n=n/10;
 }
  printf("product of digit=%ld",p);
  getch();
}