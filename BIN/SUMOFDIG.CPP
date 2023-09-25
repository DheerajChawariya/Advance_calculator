#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 long int n,s=0;
 printf("enter number");
 scanf("%ld",&n);
 for(;n>0;)       //while(n>0)
 {
  s=s+n%10;
  n=n/10;
 }
  printf("sum of digit=%ld",s);
  getch();
}